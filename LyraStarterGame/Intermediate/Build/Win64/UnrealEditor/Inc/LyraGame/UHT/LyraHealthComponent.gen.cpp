// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/LyraHealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraHealthComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealthComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealthComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealthSet_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraDeathState();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventLyraHealth_DeathEvent_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLyraHealth_DeathEvent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "LyraHealth_DeathEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::_Script_LyraGame_eventLyraHealth_DeathEvent_Parms), Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLyraHealth_DeathEvent_DelegateWrapper(const FMulticastScriptDelegate& LyraHealth_DeathEvent, AActor* OwningActor)
{
	struct _Script_LyraGame_eventLyraHealth_DeathEvent_Parms
	{
		AActor* OwningActor;
	};
	_Script_LyraGame_eventLyraHealth_DeathEvent_Parms Parms;
	Parms.OwningActor=OwningActor;
	LyraHealth_DeathEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventLyraHealth_AttributeChanged_Parms
		{
			ULyraHealthComponent* HealthComponent;
			float OldValue;
			float NewValue;
			AActor* Instigator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLyraHealth_AttributeChanged_Parms, HealthComponent), Z_Construct_UClass_ULyraHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLyraHealth_AttributeChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLyraHealth_AttributeChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLyraHealth_AttributeChanged_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "LyraHealth_AttributeChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::_Script_LyraGame_eventLyraHealth_AttributeChanged_Parms), Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLyraHealth_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& LyraHealth_AttributeChanged, ULyraHealthComponent* HealthComponent, float OldValue, float NewValue, AActor* Instigator)
{
	struct _Script_LyraGame_eventLyraHealth_AttributeChanged_Parms
	{
		ULyraHealthComponent* HealthComponent;
		float OldValue;
		float NewValue;
		AActor* Instigator;
	};
	_Script_LyraGame_eventLyraHealth_AttributeChanged_Parms Parms;
	Parms.HealthComponent=HealthComponent;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	Parms.Instigator=Instigator;
	LyraHealth_AttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraDeathState;
	static UEnum* ELyraDeathState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELyraDeathState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELyraDeathState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraDeathState, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraDeathState"));
		}
		return Z_Registration_Info_UEnum_ELyraDeathState.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ELyraDeathState>()
	{
		return ELyraDeathState_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ELyraDeathState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ELyraDeathState_Statics::Enumerators[] = {
		{ "ELyraDeathState::NotDead", (int64)ELyraDeathState::NotDead },
		{ "ELyraDeathState::DeathStarted", (int64)ELyraDeathState::DeathStarted },
		{ "ELyraDeathState::DeathFinished", (int64)ELyraDeathState::DeathFinished },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ELyraDeathState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ELyraDeathState\n *\n *\x09""Defines current state of death.\n */" },
		{ "DeathFinished.Name", "ELyraDeathState::DeathFinished" },
		{ "DeathStarted.Name", "ELyraDeathState::DeathStarted" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "NotDead.Name", "ELyraDeathState::NotDead" },
		{ "ToolTip", "ELyraDeathState\n\n    Defines current state of death." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraDeathState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ELyraDeathState",
		"ELyraDeathState",
		Z_Construct_UEnum_LyraGame_ELyraDeathState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraDeathState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ELyraDeathState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraDeathState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ELyraDeathState()
	{
		if (!Z_Registration_Info_UEnum_ELyraDeathState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraDeathState.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraDeathState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELyraDeathState.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraHealthComponent::execOnRep_DeathState)
	{
		P_GET_ENUM(ELyraDeathState,Z_Param_OldDeathState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DeathState(ELyraDeathState(Z_Param_OldDeathState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraHealthComponent::execIsDeadOrDying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeadOrDying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraHealthComponent::execGetDeathState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELyraDeathState*)Z_Param__Result=P_THIS->GetDeathState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraHealthComponent::execGetHealthNormalized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthNormalized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraHealthComponent::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraHealthComponent::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraHealthComponent::execUninitializeFromAbilitySystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UninitializeFromAbilitySystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraHealthComponent::execInitializeWithAbilitySystem)
	{
		P_GET_OBJECT(ULyraAbilitySystemComponent,Z_Param_InASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWithAbilitySystem(Z_Param_InASC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraHealthComponent::execFindHealthComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraHealthComponent**)Z_Param__Result=ULyraHealthComponent::FindHealthComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void ULyraHealthComponent::StaticRegisterNativesULyraHealthComponent()
	{
		UClass* Class = ULyraHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindHealthComponent", &ULyraHealthComponent::execFindHealthComponent },
			{ "GetDeathState", &ULyraHealthComponent::execGetDeathState },
			{ "GetHealth", &ULyraHealthComponent::execGetHealth },
			{ "GetHealthNormalized", &ULyraHealthComponent::execGetHealthNormalized },
			{ "GetMaxHealth", &ULyraHealthComponent::execGetMaxHealth },
			{ "InitializeWithAbilitySystem", &ULyraHealthComponent::execInitializeWithAbilitySystem },
			{ "IsDeadOrDying", &ULyraHealthComponent::execIsDeadOrDying },
			{ "OnRep_DeathState", &ULyraHealthComponent::execOnRep_DeathState },
			{ "UninitializeFromAbilitySystem", &ULyraHealthComponent::execUninitializeFromAbilitySystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics
	{
		struct LyraHealthComponent_eventFindHealthComponent_Parms
		{
			const AActor* Actor;
			ULyraHealthComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHealthComponent_eventFindHealthComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHealthComponent_eventFindHealthComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Health" },
		{ "Comment", "// Returns the health component if one exists on the specified actor.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Returns the health component if one exists on the specified actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHealthComponent, nullptr, "FindHealthComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::LyraHealthComponent_eventFindHealthComponent_Parms), Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics
	{
		struct LyraHealthComponent_eventGetDeathState_Parms
		{
			ELyraDeathState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHealthComponent_eventGetDeathState_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_ELyraDeathState, METADATA_PARAMS(nullptr, 0) }; // 3229194796
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Health" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHealthComponent, nullptr, "GetDeathState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::LyraHealthComponent_eventGetDeathState_Parms), Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHealthComponent_GetDeathState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHealthComponent_GetDeathState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics
	{
		struct LyraHealthComponent_eventGetHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHealthComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Health" },
		{ "Comment", "// Returns the current health value.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Returns the current health value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHealthComponent, nullptr, "GetHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::LyraHealthComponent_eventGetHealth_Parms), Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHealthComponent_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHealthComponent_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics
	{
		struct LyraHealthComponent_eventGetHealthNormalized_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHealthComponent_eventGetHealthNormalized_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Health" },
		{ "Comment", "// Returns the current health in the range [0.0, 1.0].\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Returns the current health in the range [0.0, 1.0]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHealthComponent, nullptr, "GetHealthNormalized", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::LyraHealthComponent_eventGetHealthNormalized_Parms), Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics
	{
		struct LyraHealthComponent_eventGetMaxHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHealthComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Health" },
		{ "Comment", "// Returns the current maximum health value.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Returns the current maximum health value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHealthComponent, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::LyraHealthComponent_eventGetMaxHealth_Parms), Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics
	{
		struct LyraHealthComponent_eventInitializeWithAbilitySystem_Parms
		{
			ULyraAbilitySystemComponent* InASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC = { "InASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHealthComponent_eventInitializeWithAbilitySystem_Parms, InASC), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Health" },
		{ "Comment", "// Initialize the component using an ability system component.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Initialize the component using an ability system component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHealthComponent, nullptr, "InitializeWithAbilitySystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::LyraHealthComponent_eventInitializeWithAbilitySystem_Parms), Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics
	{
		struct LyraHealthComponent_eventIsDeadOrDying_Parms
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
	void Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraHealthComponent_eventIsDeadOrDying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraHealthComponent_eventIsDeadOrDying_Parms), &Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Health" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHealthComponent, nullptr, "IsDeadOrDying", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::LyraHealthComponent_eventIsDeadOrDying_Parms), Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics
	{
		struct LyraHealthComponent_eventOnRep_DeathState_Parms
		{
			ELyraDeathState OldDeathState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OldDeathState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OldDeathState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState = { "OldDeathState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHealthComponent_eventOnRep_DeathState_Parms, OldDeathState), Z_Construct_UEnum_LyraGame_ELyraDeathState, METADATA_PARAMS(nullptr, 0) }; // 3229194796
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHealthComponent, nullptr, "OnRep_DeathState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::LyraHealthComponent_eventOnRep_DeathState_Parms), Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraHealthComponent_UninitializeFromAbilitySystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHealthComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Health" },
		{ "Comment", "// Uninitialize the component, clearing any references to the ability system.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Uninitialize the component, clearing any references to the ability system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHealthComponent_UninitializeFromAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHealthComponent, nullptr, "UninitializeFromAbilitySystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHealthComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHealthComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHealthComponent_UninitializeFromAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHealthComponent_UninitializeFromAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraHealthComponent);
	UClass* Z_Construct_UClass_ULyraHealthComponent_NoRegister()
	{
		return ULyraHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HealthSet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeathState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraHealthComponent_FindHealthComponent, "FindHealthComponent" }, // 2417524151
		{ &Z_Construct_UFunction_ULyraHealthComponent_GetDeathState, "GetDeathState" }, // 2533627699
		{ &Z_Construct_UFunction_ULyraHealthComponent_GetHealth, "GetHealth" }, // 1801138513
		{ &Z_Construct_UFunction_ULyraHealthComponent_GetHealthNormalized, "GetHealthNormalized" }, // 1246573523
		{ &Z_Construct_UFunction_ULyraHealthComponent_GetMaxHealth, "GetMaxHealth" }, // 2626033463
		{ &Z_Construct_UFunction_ULyraHealthComponent_InitializeWithAbilitySystem, "InitializeWithAbilitySystem" }, // 1091179866
		{ &Z_Construct_UFunction_ULyraHealthComponent_IsDeadOrDying, "IsDeadOrDying" }, // 3603611080
		{ &Z_Construct_UFunction_ULyraHealthComponent_OnRep_DeathState, "OnRep_DeathState" }, // 3933642196
		{ &Z_Construct_UFunction_ULyraHealthComponent_UninitializeFromAbilitySystem, "UninitializeFromAbilitySystem" }, // 2379133603
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraHealthComponent\n *\n *\x09""An actor component used to handle anything related to health.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/LyraHealthComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraHealthComponent\n\n    An actor component used to handle anything related to health." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Comment", "// Delegate fired when the health value has changed.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Delegate fired when the health value has changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnHealthChanged_MetaData)) }; // 1878252263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Comment", "// Delegate fired when the max health value has changed.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Delegate fired when the max health value has changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHealthComponent, OnMaxHealthChanged), Z_Construct_UDelegateFunction_LyraGame_LyraHealth_AttributeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnMaxHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnMaxHealthChanged_MetaData)) }; // 1878252263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathStarted_MetaData[] = {
		{ "Comment", "// Delegate fired when the death sequence has started.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Delegate fired when the death sequence has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathStarted = { "OnDeathStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHealthComponent, OnDeathStarted), Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathStarted_MetaData)) }; // 4164169086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathFinished_MetaData[] = {
		{ "Comment", "// Delegate fired when the death sequence has finished.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Delegate fired when the death sequence has finished." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathFinished = { "OnDeathFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHealthComponent, OnDeathFinished), Z_Construct_UDelegateFunction_LyraGame_LyraHealth_DeathEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathFinished_MetaData)) }; // 4164169086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Comment", "// Ability system used by this component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Ability system used by this component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHealthComponent, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_HealthSet_MetaData[] = {
		{ "Comment", "// Health set used by this component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Health set used by this component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_HealthSet = { "HealthSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHealthComponent, HealthSet), Z_Construct_UClass_ULyraHealthSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_HealthSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_HealthSet_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_DeathState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_DeathState_MetaData[] = {
		{ "Comment", "// Replicated state used to handle dying.\n" },
		{ "ModuleRelativePath", "Character/LyraHealthComponent.h" },
		{ "ToolTip", "Replicated state used to handle dying." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_DeathState = { "DeathState", "OnRep_DeathState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHealthComponent, DeathState), Z_Construct_UEnum_LyraGame_ELyraDeathState, METADATA_PARAMS(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_DeathState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_DeathState_MetaData)) }; // 3229194796
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnMaxHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_OnDeathFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_HealthSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_DeathState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHealthComponent_Statics::NewProp_DeathState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraHealthComponent_Statics::ClassParams = {
		&ULyraHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraHealthComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraHealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraHealthComponent.OuterSingleton, Z_Construct_UClass_ULyraHealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraHealthComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraHealthComponent>()
	{
		return ULyraHealthComponent::StaticClass();
	}

	void ULyraHealthComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DeathState(TEXT("DeathState"));

		const bool bIsValid = true
			&& Name_DeathState == ClassReps[(int32)ENetFields_Private::DeathState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraHealthComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraHealthComponent);
	ULyraHealthComponent::~ULyraHealthComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_Statics::EnumInfo[] = {
		{ ELyraDeathState_StaticEnum, TEXT("ELyraDeathState"), &Z_Registration_Info_UEnum_ELyraDeathState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3229194796U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraHealthComponent, ULyraHealthComponent::StaticClass, TEXT("ULyraHealthComponent"), &Z_Registration_Info_UClass_ULyraHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraHealthComponent), 214913325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_1333446698(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
