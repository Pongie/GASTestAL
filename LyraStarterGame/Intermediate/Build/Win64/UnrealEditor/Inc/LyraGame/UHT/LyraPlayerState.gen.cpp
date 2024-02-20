// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/LyraPlayerState.h"
#include "../../AIModule/Classes/GenericTeamAgentInterface.h"
#include "GameplayTagContainer.h"
#include "Messages/LyraVerbMessage.h"
#include "System/GameplayTagStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerState() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerState();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerState_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraPlayerConnectionType;
	static UEnum* ELyraPlayerConnectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELyraPlayerConnectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELyraPlayerConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraPlayerConnectionType"));
		}
		return Z_Registration_Info_UEnum_ELyraPlayerConnectionType.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ELyraPlayerConnectionType>()
	{
		return ELyraPlayerConnectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enumerators[] = {
		{ "ELyraPlayerConnectionType::Player", (int64)ELyraPlayerConnectionType::Player },
		{ "ELyraPlayerConnectionType::LiveSpectator", (int64)ELyraPlayerConnectionType::LiveSpectator },
		{ "ELyraPlayerConnectionType::ReplaySpectator", (int64)ELyraPlayerConnectionType::ReplaySpectator },
		{ "ELyraPlayerConnectionType::InactivePlayer", (int64)ELyraPlayerConnectionType::InactivePlayer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines the types of client connected */" },
		{ "InactivePlayer.Comment", "// A deactivated player (disconnected)\n" },
		{ "InactivePlayer.Name", "ELyraPlayerConnectionType::InactivePlayer" },
		{ "InactivePlayer.ToolTip", "A deactivated player (disconnected)" },
		{ "LiveSpectator.Comment", "// Spectator connected to a running game\n" },
		{ "LiveSpectator.Name", "ELyraPlayerConnectionType::LiveSpectator" },
		{ "LiveSpectator.ToolTip", "Spectator connected to a running game" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "Player.Comment", "// An active player\n" },
		{ "Player.Name", "ELyraPlayerConnectionType::Player" },
		{ "Player.ToolTip", "An active player" },
		{ "ReplaySpectator.Comment", "// Spectating a demo recording offline\n" },
		{ "ReplaySpectator.Name", "ELyraPlayerConnectionType::ReplaySpectator" },
		{ "ReplaySpectator.ToolTip", "Spectating a demo recording offline" },
		{ "ToolTip", "Defines the types of client connected" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ELyraPlayerConnectionType",
		"ELyraPlayerConnectionType",
		Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType()
	{
		if (!Z_Registration_Info_UEnum_ELyraPlayerConnectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraPlayerConnectionType.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELyraPlayerConnectionType.InnerSingleton;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execOnRep_MySquadID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MySquadID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execOnRep_MyTeamID)
	{
		P_GET_STRUCT(FGenericTeamId,Z_Param_OldTeamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MyTeamID(Z_Param_OldTeamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execOnRep_PawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PawnData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execClientBroadcastMessage)
	{
		P_GET_STRUCT(FLyraVerbMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientBroadcastMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execHasStatTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStatTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execGetStatTagStackCount)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStatTagStackCount(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execRemoveStatTagStack)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStatTagStack(Z_Param_Tag,Z_Param_StackCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execAddStatTagStack)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStatTagStack(Z_Param_Tag,Z_Param_StackCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execGetTeamId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTeamId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execGetSquadId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSquadId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execGetLyraAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerState::execGetLyraPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALyraPlayerController**)Z_Param__Result=P_THIS->GetLyraPlayerController();
		P_NATIVE_END;
	}
	struct LyraPlayerState_eventClientBroadcastMessage_Parms
	{
		FLyraVerbMessage Message;
	};
	static FName NAME_ALyraPlayerState_ClientBroadcastMessage = FName(TEXT("ClientBroadcastMessage"));
	void ALyraPlayerState::ClientBroadcastMessage(const FLyraVerbMessage Message)
	{
		LyraPlayerState_eventClientBroadcastMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerState_ClientBroadcastMessage),&Parms);
	}
	void ALyraPlayerState::StaticRegisterNativesALyraPlayerState()
	{
		UClass* Class = ALyraPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStatTagStack", &ALyraPlayerState::execAddStatTagStack },
			{ "ClientBroadcastMessage", &ALyraPlayerState::execClientBroadcastMessage },
			{ "GetLyraAbilitySystemComponent", &ALyraPlayerState::execGetLyraAbilitySystemComponent },
			{ "GetLyraPlayerController", &ALyraPlayerState::execGetLyraPlayerController },
			{ "GetSquadId", &ALyraPlayerState::execGetSquadId },
			{ "GetStatTagStackCount", &ALyraPlayerState::execGetStatTagStackCount },
			{ "GetTeamId", &ALyraPlayerState::execGetTeamId },
			{ "HasStatTag", &ALyraPlayerState::execHasStatTag },
			{ "OnRep_MySquadID", &ALyraPlayerState::execOnRep_MySquadID },
			{ "OnRep_MyTeamID", &ALyraPlayerState::execOnRep_MyTeamID },
			{ "OnRep_PawnData", &ALyraPlayerState::execOnRep_PawnData },
			{ "RemoveStatTagStack", &ALyraPlayerState::execRemoveStatTagStack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics
	{
		struct LyraPlayerState_eventAddStatTagStack_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventAddStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventAddStatTagStack_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::NewProp_StackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)\n" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ToolTip", "Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "AddStatTagStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::LyraPlayerState_eventAddStatTagStack_Parms), Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventClientBroadcastMessage_Parms, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::NewProp_Message_MetaData)) }; // 3769208837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerState" },
		{ "Comment", "// Send a message to just this player\n// (use only for client notifications like accolades, quest toasts, etc... that can handle being occasionally lost)\n" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ToolTip", "Send a message to just this player\n(use only for client notifications like accolades, quest toasts, etc... that can handle being occasionally lost)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "ClientBroadcastMessage", nullptr, nullptr, sizeof(LyraPlayerState_eventClientBroadcastMessage_Parms), Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics
	{
		struct LyraPlayerState_eventGetLyraAbilitySystemComponent_Parms
		{
			ULyraAbilitySystemComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerState" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::LyraPlayerState_eventGetLyraAbilitySystemComponent_Parms), Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics
	{
		struct LyraPlayerState_eventGetLyraPlayerController_Parms
		{
			ALyraPlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventGetLyraPlayerController_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerState" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetLyraPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::LyraPlayerState_eventGetLyraPlayerController_Parms), Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics
	{
		struct LyraPlayerState_eventGetSquadId_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventGetSquadId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the Squad ID of the squad the player belongs to. */" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ToolTip", "Returns the Squad ID of the squad the player belongs to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetSquadId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::LyraPlayerState_eventGetSquadId_Parms), Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_GetSquadId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics
	{
		struct LyraPlayerState_eventGetStatTagStackCount_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventGetStatTagStackCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventGetStatTagStackCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Returns the stack count of the specified tag (or 0 if the tag is not present)\n" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ToolTip", "Returns the stack count of the specified tag (or 0 if the tag is not present)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetStatTagStackCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::LyraPlayerState_eventGetStatTagStackCount_Parms), Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics
	{
		struct LyraPlayerState_eventGetTeamId_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventGetTeamId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the Team ID of the team the player belongs to. */" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ToolTip", "Returns the Team ID of the team the player belongs to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetTeamId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::LyraPlayerState_eventGetTeamId_Parms), Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_GetTeamId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics
	{
		struct LyraPlayerState_eventHasStatTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventHasStatTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraPlayerState_eventHasStatTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraPlayerState_eventHasStatTag_Parms), &Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Returns true if there is at least one stack of the specified tag\n" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ToolTip", "Returns true if there is at least one stack of the specified tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "HasStatTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::LyraPlayerState_eventHasStatTag_Parms), Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_HasStatTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "OnRep_MySquadID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics
	{
		struct LyraPlayerState_eventOnRep_MyTeamID_Parms
		{
			FGenericTeamId OldTeamID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldTeamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::NewProp_OldTeamID = { "OldTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventOnRep_MyTeamID_Parms, OldTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(nullptr, 0) }; // 4223950188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::NewProp_OldTeamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "OnRep_MyTeamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::LyraPlayerState_eventOnRep_MyTeamID_Parms), Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "OnRep_PawnData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics
	{
		struct LyraPlayerState_eventRemoveStatTagStack_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventRemoveStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerState_eventRemoveStatTagStack_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::NewProp_StackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)\n" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ToolTip", "Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "RemoveStatTagStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::LyraPlayerState_eventRemoveStatTagStack_Parms), Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerState);
	UClass* Z_Construct_UClass_ALyraPlayerState_NoRegister()
	{
		return ALyraPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ALyraPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PawnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyPlayerConnectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyPlayerConnectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MyPlayerConnectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTeamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyTeamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MySquadID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MySquadID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularPlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALyraPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack, "AddStatTagStack" }, // 4034186202
		{ &Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage, "ClientBroadcastMessage" }, // 588851737
		{ &Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 1005276906
		{ &Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController, "GetLyraPlayerController" }, // 3329398194
		{ &Z_Construct_UFunction_ALyraPlayerState_GetSquadId, "GetSquadId" }, // 3817488819
		{ &Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount, "GetStatTagStackCount" }, // 4059992423
		{ &Z_Construct_UFunction_ALyraPlayerState_GetTeamId, "GetTeamId" }, // 2834238647
		{ &Z_Construct_UFunction_ALyraPlayerState_HasStatTag, "HasStatTag" }, // 2948875731
		{ &Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID, "OnRep_MySquadID" }, // 2298794111
		{ &Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID, "OnRep_MyTeamID" }, // 2598837024
		{ &Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData, "OnRep_PawnData" }, // 3680464441
		{ &Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack, "RemoveStatTagStack" }, // 404379925
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALyraPlayerState\n *\n *\x09""Base player state class used by this project.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/LyraPlayerState.h" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ALyraPlayerState\n\n    Base player state class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_PawnData_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0024080100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerState, PawnData), Z_Construct_UClass_ULyraPawnData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_PawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_PawnData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Lyra|PlayerState" },
		{ "Comment", "// The ability system component sub-object used by player characters.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ToolTip", "The ability system component sub-object used by player characters." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerState, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType = { "MyPlayerConnectionType", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerState, MyPlayerConnectionType), Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType_MetaData)) }; // 3304160626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerState, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_OnTeamChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_OnTeamChangedDelegate_MetaData)) }; // 4103646683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyTeamID_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyTeamID = { "MyTeamID", "OnRep_MyTeamID", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerState, MyTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyTeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyTeamID_MetaData)) }; // 4223950188
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MySquadID_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MySquadID = { "MySquadID", "OnRep_MySquadID", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerState, MySquadID), METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MySquadID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MySquadID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_StatTags_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_StatTags = { "StatTags", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerState, StatTags), Z_Construct_UScriptStruct_FGameplayTagStackContainer, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_StatTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_StatTags_MetaData)) }; // 685747391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_PawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_OnTeamChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyTeamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MySquadID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_StatTags,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerState, IAbilitySystemInterface), false },  // 220555618
			{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerState, ILyraTeamAgentInterface), false },  // 3166716212
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerState_Statics::ClassParams = {
		&ALyraPlayerState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALyraPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraPlayerState()
	{
		if (!Z_Registration_Info_UClass_ALyraPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerState.OuterSingleton, Z_Construct_UClass_ALyraPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraPlayerState.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerState>()
	{
		return ALyraPlayerState::StaticClass();
	}

	void ALyraPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PawnData(TEXT("PawnData"));
		static const FName Name_MyPlayerConnectionType(TEXT("MyPlayerConnectionType"));
		static const FName Name_MyTeamID(TEXT("MyTeamID"));
		static const FName Name_MySquadID(TEXT("MySquadID"));
		static const FName Name_StatTags(TEXT("StatTags"));

		const bool bIsValid = true
			&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName()
			&& Name_MyPlayerConnectionType == ClassReps[(int32)ENetFields_Private::MyPlayerConnectionType].Property->GetFName()
			&& Name_MyTeamID == ClassReps[(int32)ENetFields_Private::MyTeamID].Property->GetFName()
			&& Name_MySquadID == ClassReps[(int32)ENetFields_Private::MySquadID].Property->GetFName()
			&& Name_StatTags == ClassReps[(int32)ENetFields_Private::StatTags].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerState);
	ALyraPlayerState::~ALyraPlayerState() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::EnumInfo[] = {
		{ ELyraPlayerConnectionType_StaticEnum, TEXT("ELyraPlayerConnectionType"), &Z_Registration_Info_UEnum_ELyraPlayerConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3304160626U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerState, ALyraPlayerState::StaticClass, TEXT("ALyraPlayerState"), &Z_Registration_Info_UClass_ALyraPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerState), 2672259791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_3171918966(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
