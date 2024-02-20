// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/LyraWeaponSpawner.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraWeaponSpawner();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraWeaponSpawner_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ALyraWeaponSpawner::execGetDefaultStatFromItemDef)
	{
		P_GET_OBJECT(UClass,Z_Param_WeaponItemClass);
		P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ALyraWeaponSpawner::GetDefaultStatFromItemDef(Z_Param_WeaponItemClass,Z_Param_StatTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraWeaponSpawner::execOnRep_WeaponAvailability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WeaponAvailability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraWeaponSpawner::execPlayRespawnEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRespawnEffects_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraWeaponSpawner::execPlayPickupEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayPickupEffects_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraWeaponSpawner::execOnCoolDownTimerComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCoolDownTimerComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraWeaponSpawner::execResetCoolDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCoolDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraWeaponSpawner::execAttemptPickUpWeapon)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttemptPickUpWeapon_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraWeaponSpawner::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	struct LyraWeaponSpawner_eventAttemptPickUpWeapon_Parms
	{
		APawn* Pawn;
	};
	struct LyraWeaponSpawner_eventGiveWeapon_Parms
	{
		TSubclassOf<ULyraInventoryItemDefinition>  WeaponItemClass;
		APawn* ReceivingPawn;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LyraWeaponSpawner_eventGiveWeapon_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_ALyraWeaponSpawner_AttemptPickUpWeapon = FName(TEXT("AttemptPickUpWeapon"));
	void ALyraWeaponSpawner::AttemptPickUpWeapon(APawn* Pawn)
	{
		LyraWeaponSpawner_eventAttemptPickUpWeapon_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_ALyraWeaponSpawner_AttemptPickUpWeapon),&Parms);
	}
	static FName NAME_ALyraWeaponSpawner_GiveWeapon = FName(TEXT("GiveWeapon"));
	bool ALyraWeaponSpawner::GiveWeapon(TSubclassOf<ULyraInventoryItemDefinition>  WeaponItemClass, APawn* ReceivingPawn)
	{
		LyraWeaponSpawner_eventGiveWeapon_Parms Parms;
		Parms.WeaponItemClass=WeaponItemClass;
		Parms.ReceivingPawn=ReceivingPawn;
		ProcessEvent(FindFunctionChecked(NAME_ALyraWeaponSpawner_GiveWeapon),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ALyraWeaponSpawner_PlayPickupEffects = FName(TEXT("PlayPickupEffects"));
	void ALyraWeaponSpawner::PlayPickupEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALyraWeaponSpawner_PlayPickupEffects),NULL);
	}
	static FName NAME_ALyraWeaponSpawner_PlayRespawnEffects = FName(TEXT("PlayRespawnEffects"));
	void ALyraWeaponSpawner::PlayRespawnEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALyraWeaponSpawner_PlayRespawnEffects),NULL);
	}
	void ALyraWeaponSpawner::StaticRegisterNativesALyraWeaponSpawner()
	{
		UClass* Class = ALyraWeaponSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttemptPickUpWeapon", &ALyraWeaponSpawner::execAttemptPickUpWeapon },
			{ "GetDefaultStatFromItemDef", &ALyraWeaponSpawner::execGetDefaultStatFromItemDef },
			{ "OnCoolDownTimerComplete", &ALyraWeaponSpawner::execOnCoolDownTimerComplete },
			{ "OnOverlapBegin", &ALyraWeaponSpawner::execOnOverlapBegin },
			{ "OnRep_WeaponAvailability", &ALyraWeaponSpawner::execOnRep_WeaponAvailability },
			{ "PlayPickupEffects", &ALyraWeaponSpawner::execPlayPickupEffects },
			{ "PlayRespawnEffects", &ALyraWeaponSpawner::execPlayRespawnEffects },
			{ "ResetCoolDown", &ALyraWeaponSpawner::execResetCoolDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventAttemptPickUpWeapon_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "AttemptPickUpWeapon", nullptr, nullptr, sizeof(LyraWeaponSpawner_eventAttemptPickUpWeapon_Parms), Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics
	{
		struct LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms
		{
			const TSubclassOf<ULyraInventoryItemDefinition>  WeaponItemClass;
			FGameplayTag StatTag;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponItemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponItemClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_WeaponItemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_WeaponItemClass = { "WeaponItemClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms, WeaponItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_WeaponItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_WeaponItemClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_WeaponItemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_StatTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "Comment", "/** Searches an item definition type for a matching stat and returns the value, or 0 if not found */" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
		{ "ToolTip", "Searches an item definition type for a matching stat and returns the value, or 0 if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "GetDefaultStatFromItemDef", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms), Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponItemClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceivingPawn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_WeaponItemClass = { "WeaponItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventGiveWeapon_Parms, WeaponItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReceivingPawn = { "ReceivingPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventGiveWeapon_Parms, ReceivingPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraWeaponSpawner_eventGiveWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraWeaponSpawner_eventGiveWeapon_Parms), &Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_WeaponItemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReceivingPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "GiveWeapon", nullptr, nullptr, sizeof(LyraWeaponSpawner_eventGiveWeapon_Parms), Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "OnCoolDownTimerComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics
	{
		struct LyraWeaponSpawner_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepHitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LyraWeaponSpawner_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraWeaponSpawner_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_SweepHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_SweepHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_SweepHitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::LyraWeaponSpawner_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "OnRep_WeaponAvailability", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "PlayPickupEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "PlayRespawnEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "ResetCoolDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraWeaponSpawner);
	UClass* Z_Construct_UClass_ALyraWeaponSpawner_NoRegister()
	{
		return ALyraWeaponSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ALyraWeaponSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeaponDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWeaponAvailable_MetaData[];
#endif
		static void NewProp_bIsWeaponAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoolDownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckExistingOverlapDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckExistingOverlapDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoolDownPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDownPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PadMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PadMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponMeshRotationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraWeaponSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALyraWeaponSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon, "AttemptPickUpWeapon" }, // 2836609746
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef, "GetDefaultStatFromItemDef" }, // 1192438410
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon, "GiveWeapon" }, // 2500170517
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete, "OnCoolDownTimerComplete" }, // 3208407339
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin, "OnOverlapBegin" }, // 307239710
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability, "OnRep_WeaponAvailability" }, // 2287549406
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects, "PlayPickupEffects" }, // 3964577274
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects, "PlayRespawnEffects" }, // 2295088653
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown, "ResetCoolDown" }, // 2735857711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/LyraWeaponSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponDefinition_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "Comment", "//Data asset used to configure a Weapon Spawner\n" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
		{ "ToolTip", "Data asset used to configure a Weapon Spawner" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponDefinition = { "WeaponDefinition", nullptr, (EPropertyFlags)0x0024080000000815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraWeaponSpawner, WeaponDefinition), Z_Construct_UClass_ULyraWeaponPickupDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponDefinition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable_SetBit(void* Obj)
	{
		((ALyraWeaponSpawner*)Obj)->bIsWeaponAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable = { "bIsWeaponAvailable", "OnRep_WeaponAvailability", (EPropertyFlags)0x0020080100010025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALyraWeaponSpawner), &Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownTime_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "Comment", "//The amount of time between weapon pickup and weapon spawning in seconds\n" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
		{ "ToolTip", "The amount of time between weapon pickup and weapon spawning in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownTime = { "CoolDownTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraWeaponSpawner, CoolDownTime), METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CheckExistingOverlapDelay_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "Comment", "//Delay between when the weapon is made available and when we check for a pawn standing in the spawner. Used to give the bIsWeaponAvailable OnRep time to fire and play FX. \n" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
		{ "ToolTip", "Delay between when the weapon is made available and when we check for a pawn standing in the spawner. Used to give the bIsWeaponAvailable OnRep time to fire and play FX." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CheckExistingOverlapDelay = { "CheckExistingOverlapDelay", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraWeaponSpawner, CheckExistingOverlapDelay), METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CheckExistingOverlapDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CheckExistingOverlapDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownPercentage_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "Comment", "//Used to drive weapon respawn time indicators 0-1\n" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
		{ "ToolTip", "Used to drive weapon respawn time indicators 0-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownPercentage = { "CoolDownPercentage", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraWeaponSpawner, CoolDownPercentage), METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CollisionVolume_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CollisionVolume = { "CollisionVolume", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraWeaponSpawner, CollisionVolume), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CollisionVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CollisionVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_PadMesh_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_PadMesh = { "PadMesh", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraWeaponSpawner, PadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_PadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_PadMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraWeaponSpawner, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMeshRotationSpeed_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMeshRotationSpeed = { "WeaponMeshRotationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraWeaponSpawner, WeaponMeshRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMeshRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMeshRotationSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraWeaponSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CheckExistingOverlapDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CollisionVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_PadMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMeshRotationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraWeaponSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraWeaponSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::ClassParams = {
		&ALyraWeaponSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALyraWeaponSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraWeaponSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraWeaponSpawner()
	{
		if (!Z_Registration_Info_UClass_ALyraWeaponSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraWeaponSpawner.OuterSingleton, Z_Construct_UClass_ALyraWeaponSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraWeaponSpawner.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraWeaponSpawner>()
	{
		return ALyraWeaponSpawner::StaticClass();
	}

	void ALyraWeaponSpawner::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsWeaponAvailable(TEXT("bIsWeaponAvailable"));

		const bool bIsValid = true
			&& Name_bIsWeaponAvailable == ClassReps[(int32)ENetFields_Private::bIsWeaponAvailable].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraWeaponSpawner"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraWeaponSpawner);
	ALyraWeaponSpawner::~ALyraWeaponSpawner() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraWeaponSpawner, ALyraWeaponSpawner::StaticClass, TEXT("ALyraWeaponSpawner"), &Z_Registration_Info_UClass_ALyraWeaponSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraWeaponSpawner), 3310657375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_1742421293(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
