// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/LyraCharacter.h"
#include "../../AIModule/Classes/GenericTeamAgentInterface.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ReplicatedState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCharacter() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacter();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacter_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerState_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealthComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraReplicatedAcceleration();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSharedRepMovement();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration;
class UScriptStruct* FLyraReplicatedAcceleration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraReplicatedAcceleration"));
	}
	return Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraReplicatedAcceleration>()
{
	return FLyraReplicatedAcceleration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYRadians_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYRadians;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelZ_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AccelZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FLyraReplicatedAcceleration: Compressed representation of acceleration\n */" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ToolTip", "FLyraReplicatedAcceleration: Compressed representation of acceleration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraReplicatedAcceleration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYRadians_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYRadians = { "AccelXYRadians", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraReplicatedAcceleration, AccelXYRadians), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYRadians_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYRadians_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude_MetaData[] = {
		{ "Comment", "// Direction of XY accel component, quantized to represent [0, 2*pi]\n" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ToolTip", "Direction of XY accel component, quantized to represent [0, 2*pi]" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude = { "AccelXYMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraReplicatedAcceleration, AccelXYMagnitude), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelZ_MetaData[] = {
		{ "Comment", "//Accel rate of XY component, quantized to represent [0, MaxAcceleration]\n" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ToolTip", "Accel rate of XY component, quantized to represent [0, MaxAcceleration]" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelZ = { "AccelZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraReplicatedAcceleration, AccelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYRadians,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraReplicatedAcceleration",
		sizeof(FLyraReplicatedAcceleration),
		alignof(FLyraReplicatedAcceleration),
		Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraReplicatedAcceleration()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.InnerSingleton, Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SharedRepMovement;
class UScriptStruct* FSharedRepMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SharedRepMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SharedRepMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedRepMovement, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("SharedRepMovement"));
	}
	return Z_Registration_Info_UScriptStruct_SharedRepMovement.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FSharedRepMovement>()
{
	return FSharedRepMovement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSharedRepMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepMovement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RepMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepTimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RepTimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepMovementMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RepMovementMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProxyIsJumpForceApplied_MetaData[];
#endif
		static void NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProxyIsJumpForceApplied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[];
#endif
		static void NewProp_bIsCrouched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedRepMovement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** The type we use to send FastShared movement updates. */" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ToolTip", "The type we use to send FastShared movement updates." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedRepMovement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovement_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovement = { "RepMovement", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSharedRepMovement, RepMovement), Z_Construct_UScriptStruct_FRepMovement, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovement_MetaData)) }; // 2916781816
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepTimeStamp = { "RepTimeStamp", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSharedRepMovement, RepTimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepTimeStamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovementMode_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovementMode = { "RepMovementMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSharedRepMovement, RepMovementMode), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovementMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj)
	{
		((FSharedRepMovement*)Obj)->bProxyIsJumpForceApplied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied = { "bProxyIsJumpForceApplied", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSharedRepMovement), &Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
	{
		((FSharedRepMovement*)Obj)->bIsCrouched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSharedRepMovement), &Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepTimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"SharedRepMovement",
		sizeof(FSharedRepMovement),
		alignof(FSharedRepMovement),
		Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSharedRepMovement()
	{
		if (!Z_Registration_Info_UScriptStruct_SharedRepMovement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SharedRepMovement.InnerSingleton, Z_Construct_UScriptStruct_FSharedRepMovement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SharedRepMovement.InnerSingleton;
	}
	DEFINE_FUNCTION(ALyraCharacter::execOnRep_MyTeamID)
	{
		P_GET_STRUCT(FGenericTeamId,Z_Param_OldTeamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MyTeamID(Z_Param_OldTeamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraCharacter::execOnRep_ReplicatedAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedAcceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraCharacter::execOnControllerChangedTeam)
	{
		P_GET_OBJECT(UObject,Z_Param_TeamAgent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControllerChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraCharacter::execOnDeathFinished)
	{
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeathFinished(Z_Param_OwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraCharacter::execOnDeathStarted)
	{
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeathStarted(Z_Param_OwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraCharacter::execFastSharedReplication)
	{
		P_GET_STRUCT(FSharedRepMovement,Z_Param_SharedRepMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FastSharedReplication_Implementation(Z_Param_SharedRepMovement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraCharacter::execGetLyraAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraCharacter::execGetLyraPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALyraPlayerState**)Z_Param__Result=P_THIS->GetLyraPlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraCharacter::execGetLyraPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALyraPlayerController**)Z_Param__Result=P_THIS->GetLyraPlayerController();
		P_NATIVE_END;
	}
	struct LyraCharacter_eventFastSharedReplication_Parms
	{
		FSharedRepMovement SharedRepMovement;
	};
	static FName NAME_ALyraCharacter_FastSharedReplication = FName(TEXT("FastSharedReplication"));
	void ALyraCharacter::FastSharedReplication(FSharedRepMovement const& SharedRepMovement)
	{
		LyraCharacter_eventFastSharedReplication_Parms Parms;
		Parms.SharedRepMovement=SharedRepMovement;
		ProcessEvent(FindFunctionChecked(NAME_ALyraCharacter_FastSharedReplication),&Parms);
	}
	static FName NAME_ALyraCharacter_K2_OnDeathFinished = FName(TEXT("K2_OnDeathFinished"));
	void ALyraCharacter::K2_OnDeathFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALyraCharacter_K2_OnDeathFinished),NULL);
	}
	void ALyraCharacter::StaticRegisterNativesALyraCharacter()
	{
		UClass* Class = ALyraCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FastSharedReplication", &ALyraCharacter::execFastSharedReplication },
			{ "GetLyraAbilitySystemComponent", &ALyraCharacter::execGetLyraAbilitySystemComponent },
			{ "GetLyraPlayerController", &ALyraCharacter::execGetLyraPlayerController },
			{ "GetLyraPlayerState", &ALyraCharacter::execGetLyraPlayerState },
			{ "OnControllerChangedTeam", &ALyraCharacter::execOnControllerChangedTeam },
			{ "OnDeathFinished", &ALyraCharacter::execOnDeathFinished },
			{ "OnDeathStarted", &ALyraCharacter::execOnDeathStarted },
			{ "OnRep_MyTeamID", &ALyraCharacter::execOnRep_MyTeamID },
			{ "OnRep_ReplicatedAcceleration", &ALyraCharacter::execOnRep_ReplicatedAcceleration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedRepMovement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SharedRepMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::NewProp_SharedRepMovement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::NewProp_SharedRepMovement = { "SharedRepMovement", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventFastSharedReplication_Parms, SharedRepMovement), Z_Construct_UScriptStruct_FSharedRepMovement, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::NewProp_SharedRepMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::NewProp_SharedRepMovement_MetaData)) }; // 3318878459
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::NewProp_SharedRepMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** RPCs that is called on frames when default property replication is skipped. This replicates a single movement update to everyone. */" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ToolTip", "RPCs that is called on frames when default property replication is skipped. This replicates a single movement update to everyone." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "FastSharedReplication", nullptr, nullptr, sizeof(LyraCharacter_eventFastSharedReplication_Parms), Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_FastSharedReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics
	{
		struct LyraCharacter_eventGetLyraAbilitySystemComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::LyraCharacter_eventGetLyraAbilitySystemComponent_Parms), Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics
	{
		struct LyraCharacter_eventGetLyraPlayerController_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventGetLyraPlayerController_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "GetLyraPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::LyraCharacter_eventGetLyraPlayerController_Parms), Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics
	{
		struct LyraCharacter_eventGetLyraPlayerState_Parms
		{
			ALyraPlayerState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventGetLyraPlayerState_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "GetLyraPlayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::LyraCharacter_eventGetLyraPlayerState_Parms), Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the death sequence for the character has completed\n" },
		{ "DisplayName", "OnDeathFinished" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ToolTip", "Called when the death sequence for the character has completed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "K2_OnDeathFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics
	{
		struct LyraCharacter_eventOnControllerChangedTeam_Parms
		{
			UObject* TeamAgent;
			int32 OldTeam;
			int32 NewTeam;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventOnControllerChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventOnControllerChangedTeam_Parms, OldTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventOnControllerChangedTeam_Parms, NewTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_TeamAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_OldTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_NewTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnControllerChangedTeam", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::LyraCharacter_eventOnControllerChangedTeam_Parms), Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics
	{
		struct LyraCharacter_eventOnDeathFinished_Parms
		{
			AActor* OwningActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventOnDeathFinished_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Ends the death sequence for the character (detaches controller, destroys pawn, etc...)\n" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ToolTip", "Ends the death sequence for the character (detaches controller, destroys pawn, etc...)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnDeathFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::LyraCharacter_eventOnDeathFinished_Parms), Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_OnDeathFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics
	{
		struct LyraCharacter_eventOnDeathStarted_Parms
		{
			AActor* OwningActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventOnDeathStarted_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Begins the death sequence for the character (disables collision, disables movement, etc...)\n" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ToolTip", "Begins the death sequence for the character (disables collision, disables movement, etc...)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnDeathStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::LyraCharacter_eventOnDeathStarted_Parms), Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_OnDeathStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics
	{
		struct LyraCharacter_eventOnRep_MyTeamID_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::NewProp_OldTeamID = { "OldTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacter_eventOnRep_MyTeamID_Parms, OldTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(nullptr, 0) }; // 4223950188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::NewProp_OldTeamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnRep_MyTeamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::LyraCharacter_eventOnRep_MyTeamID_Parms), Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnRep_ReplicatedAcceleration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraCharacter);
	UClass* Z_Construct_UClass_ALyraCharacter_NoRegister()
	{
		return ALyraCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALyraCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnExtComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PawnExtComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTeamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyTeamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALyraCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraCharacter_FastSharedReplication, "FastSharedReplication" }, // 2596047597
		{ &Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 1451520300
		{ &Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController, "GetLyraPlayerController" }, // 790016005
		{ &Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState, "GetLyraPlayerState" }, // 3113650189
		{ &Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished, "K2_OnDeathFinished" }, // 1232162707
		{ &Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam, "OnControllerChangedTeam" }, // 3388992690
		{ &Z_Construct_UFunction_ALyraCharacter_OnDeathFinished, "OnDeathFinished" }, // 3389834325
		{ &Z_Construct_UFunction_ALyraCharacter_OnDeathStarted, "OnDeathStarted" }, // 2868074740
		{ &Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID, "OnRep_MyTeamID" }, // 662730359
		{ &Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration, "OnRep_ReplicatedAcceleration" }, // 774454910
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALyraCharacter\n *\n *\x09The base character pawn class used by this project.\n *\x09Responsible for sending events to pawn components.\n *\x09New behavior should be added via pawn components when possible.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LyraCharacter.h" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base character pawn class used by this project." },
		{ "ToolTip", "ALyraCharacter\n\n    The base character pawn class used by this project.\n    Responsible for sending events to pawn components.\n    New behavior should be added via pawn components when possible." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraCharacter_Statics::NewProp_PawnExtComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lyra|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_PawnExtComponent = { "PawnExtComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraCharacter, PawnExtComponent), Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_PawnExtComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_PawnExtComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lyra|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraCharacter, HealthComponent), Z_Construct_UClass_ULyraHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lyra|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraCharacter, CameraComponent), Z_Construct_UClass_ULyraCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraCharacter_Statics::NewProp_ReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_ReplicatedAcceleration = { "ReplicatedAcceleration", "OnRep_ReplicatedAcceleration", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraCharacter, ReplicatedAcceleration), Z_Construct_UScriptStruct_FLyraReplicatedAcceleration, METADATA_PARAMS(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_ReplicatedAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_ReplicatedAcceleration_MetaData)) }; // 2287304541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraCharacter_Statics::NewProp_MyTeamID_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_MyTeamID = { "MyTeamID", "OnRep_MyTeamID", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraCharacter, MyTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_MyTeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_MyTeamID_MetaData)) }; // 4223950188
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraCharacter_Statics::NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraCharacter, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_OnTeamChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::NewProp_OnTeamChangedDelegate_MetaData)) }; // 4103646683
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_PawnExtComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_ReplicatedAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_MyTeamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_OnTeamChangedDelegate,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraCharacter, IAbilitySystemInterface), false },  // 220555618
			{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraCharacter, IGameplayCueInterface), false },  // 462976300
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraCharacter, IGameplayTagAssetInterface), false },  // 3654419898
			{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraCharacter, ILyraTeamAgentInterface), false },  // 3166716212
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraCharacter_Statics::ClassParams = {
		&ALyraCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALyraCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraCharacter()
	{
		if (!Z_Registration_Info_UClass_ALyraCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraCharacter.OuterSingleton, Z_Construct_UClass_ALyraCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraCharacter.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraCharacter>()
	{
		return ALyraCharacter::StaticClass();
	}

	void ALyraCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedAcceleration(TEXT("ReplicatedAcceleration"));
		static const FName Name_MyTeamID(TEXT("MyTeamID"));

		const bool bIsValid = true
			&& Name_ReplicatedAcceleration == ClassReps[(int32)ENetFields_Private::ReplicatedAcceleration].Property->GetFName()
			&& Name_MyTeamID == ClassReps[(int32)ENetFields_Private::MyTeamID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraCharacter);
	ALyraCharacter::~ALyraCharacter() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ScriptStructInfo[] = {
		{ FLyraReplicatedAcceleration::StaticStruct, Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewStructOps, TEXT("LyraReplicatedAcceleration"), &Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraReplicatedAcceleration), 2287304541U) },
		{ FSharedRepMovement::StaticStruct, Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewStructOps, TEXT("SharedRepMovement"), &Z_Registration_Info_UScriptStruct_SharedRepMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedRepMovement), 3318878459U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraCharacter, ALyraCharacter::StaticClass, TEXT("ALyraCharacter"), &Z_Registration_Info_UClass_ALyraCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraCharacter), 1345477555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_3209298257(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
