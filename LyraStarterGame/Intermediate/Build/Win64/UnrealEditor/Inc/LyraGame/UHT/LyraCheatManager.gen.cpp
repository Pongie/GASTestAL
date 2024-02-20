// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/LyraCheatManager.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCheatManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCheatManager();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCheatManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraCheatManager::execUnlimitedHealth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlimitedHealth(Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execDamageSelfDestruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageSelfDestruct();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execHealTarget)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealTarget(Z_Param_HealAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execHealSelf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealSelf(Z_Param_HealAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execDamageSelf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageSelf(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execRemoveTagFromSelf)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTagFromSelf(Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execAddTagToSelf)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTagToSelf(Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execCancelActivatedAbilities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelActivatedAbilities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execCycleAbilitySystemDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleAbilitySystemDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execCycleDebugCameras)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleDebugCameras();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execToggleFixedCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleFixedCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execPlayNextGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayNextGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execCheatAll)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheatAll(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCheatManager::execCheat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cheat(Z_Param_Msg);
		P_NATIVE_END;
	}
	void ULyraCheatManager::StaticRegisterNativesULyraCheatManager()
	{
		UClass* Class = ULyraCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTagToSelf", &ULyraCheatManager::execAddTagToSelf },
			{ "CancelActivatedAbilities", &ULyraCheatManager::execCancelActivatedAbilities },
			{ "Cheat", &ULyraCheatManager::execCheat },
			{ "CheatAll", &ULyraCheatManager::execCheatAll },
			{ "CycleAbilitySystemDebug", &ULyraCheatManager::execCycleAbilitySystemDebug },
			{ "CycleDebugCameras", &ULyraCheatManager::execCycleDebugCameras },
			{ "DamageSelf", &ULyraCheatManager::execDamageSelf },
			{ "DamageSelfDestruct", &ULyraCheatManager::execDamageSelfDestruct },
			{ "HealSelf", &ULyraCheatManager::execHealSelf },
			{ "HealTarget", &ULyraCheatManager::execHealTarget },
			{ "PlayNextGame", &ULyraCheatManager::execPlayNextGame },
			{ "RemoveTagFromSelf", &ULyraCheatManager::execRemoveTagFromSelf },
			{ "ToggleFixedCamera", &ULyraCheatManager::execToggleFixedCamera },
			{ "UnlimitedHealth", &ULyraCheatManager::execUnlimitedHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics
	{
		struct LyraCheatManager_eventAddTagToSelf_Parms
		{
			FString TagName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCheatManager_eventAddTagToSelf_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::NewProp_TagName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Adds the dynamic tag to the owning player's ability system component.\n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Adds the dynamic tag to the owning player's ability system component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "AddTagToSelf", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::LyraCheatManager_eventAddTagToSelf_Parms), Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Forces input activated abilities to be canceled.  Useful for tracking down ability interruption bugs. \n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Forces input activated abilities to be canceled.  Useful for tracking down ability interruption bugs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "CancelActivatedAbilities", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics
	{
		struct LyraCheatManager_eventCheat_Parms
		{
			FString Msg;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCheatManager_eventCheat_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::NewProp_Msg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Runs a cheat on the server for the owning player.\n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Runs a cheat on the server for the owning player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "Cheat", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::LyraCheatManager_eventCheat_Parms), Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_Cheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics
	{
		struct LyraCheatManager_eventCheatAll_Parms
		{
			FString Msg;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCheatManager_eventCheatAll_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::NewProp_Msg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Runs a cheat on the server for the all players.\n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Runs a cheat on the server for the all players." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "CheatAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::LyraCheatManager_eventCheatAll_Parms), Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_CheatAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "CycleAbilitySystemDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "CycleDebugCameras", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics
	{
		struct LyraCheatManager_eventDamageSelf_Parms
		{
			float DamageAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCheatManager_eventDamageSelf_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Applies the specified damage amount to the owning player.\n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Applies the specified damage amount to the owning player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "DamageSelf", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::LyraCheatManager_eventDamageSelf_Parms), Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_DamageSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Applies enough damage to kill the owning player.\n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Applies enough damage to kill the owning player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "DamageSelfDestruct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics
	{
		struct LyraCheatManager_eventHealSelf_Parms
		{
			float HealAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCheatManager_eventHealSelf_Parms, HealAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::NewProp_HealAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Applies the specified amount of healing to the owning player.\n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Applies the specified amount of healing to the owning player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "HealSelf", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::LyraCheatManager_eventHealSelf_Parms), Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_HealSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics
	{
		struct LyraCheatManager_eventHealTarget_Parms
		{
			float HealAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCheatManager_eventHealTarget_Parms, HealAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::NewProp_HealAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Applies the specified amount of healing to the actor that the player is looking at.\n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Applies the specified amount of healing to the actor that the player is looking at." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "HealTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::LyraCheatManager_eventHealTarget_Parms), Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_HealTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Starts the next match\n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Starts the next match" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "PlayNextGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_PlayNextGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics
	{
		struct LyraCheatManager_eventRemoveTagFromSelf_Parms
		{
			FString TagName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCheatManager_eventRemoveTagFromSelf_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::NewProp_TagName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Removes the dynamic tag from the owning player's ability system component.\n" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Removes the dynamic tag from the owning player's ability system component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "RemoveTagFromSelf", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::LyraCheatManager_eventRemoveTagFromSelf_Parms), Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "ToggleFixedCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics
	{
		struct LyraCheatManager_eventUnlimitedHealth_Parms
		{
			int32 Enabled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCheatManager_eventUnlimitedHealth_Parms, Enabled), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Prevents the owning player from dropping below 1 health.\n" },
		{ "CPP_Default_Enabled", "-1" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "Prevents the owning player from dropping below 1 health." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "UnlimitedHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::LyraCheatManager_eventUnlimitedHealth_Parms), Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCheatManager);
	UClass* Z_Construct_UClass_ULyraCheatManager_NoRegister()
	{
		return ULyraCheatManager::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCheatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCheatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManager,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraCheatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf, "AddTagToSelf" }, // 8178335
		{ &Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities, "CancelActivatedAbilities" }, // 2672807612
		{ &Z_Construct_UFunction_ULyraCheatManager_Cheat, "Cheat" }, // 4113236296
		{ &Z_Construct_UFunction_ULyraCheatManager_CheatAll, "CheatAll" }, // 1094831992
		{ &Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug, "CycleAbilitySystemDebug" }, // 2759635050
		{ &Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras, "CycleDebugCameras" }, // 2335766815
		{ &Z_Construct_UFunction_ULyraCheatManager_DamageSelf, "DamageSelf" }, // 485669215
		{ &Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct, "DamageSelfDestruct" }, // 2557536003
		{ &Z_Construct_UFunction_ULyraCheatManager_HealSelf, "HealSelf" }, // 2782779063
		{ &Z_Construct_UFunction_ULyraCheatManager_HealTarget, "HealTarget" }, // 2613486190
		{ &Z_Construct_UFunction_ULyraCheatManager_PlayNextGame, "PlayNextGame" }, // 848418977
		{ &Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf, "RemoveTagFromSelf" }, // 1372492682
		{ &Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera, "ToggleFixedCamera" }, // 2983025180
		{ &Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth, "UnlimitedHealth" }, // 3534297749
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCheatManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraCheatManager\n *\n *\x09""Base cheat manager class used by this project.\n */" },
		{ "IncludePath", "Player/LyraCheatManager.h" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
		{ "ToolTip", "ULyraCheatManager\n\n    Base cheat manager class used by this project." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCheatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCheatManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCheatManager_Statics::ClassParams = {
		&ULyraCheatManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraCheatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCheatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCheatManager()
	{
		if (!Z_Registration_Info_UClass_ULyraCheatManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCheatManager.OuterSingleton, Z_Construct_UClass_ULyraCheatManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCheatManager.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraCheatManager>()
	{
		return ULyraCheatManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCheatManager);
	ULyraCheatManager::~ULyraCheatManager() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCheatManager, ULyraCheatManager::StaticClass, TEXT("ULyraCheatManager"), &Z_Registration_Info_UClass_ULyraCheatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCheatManager), 2871889278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_3745874974(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
