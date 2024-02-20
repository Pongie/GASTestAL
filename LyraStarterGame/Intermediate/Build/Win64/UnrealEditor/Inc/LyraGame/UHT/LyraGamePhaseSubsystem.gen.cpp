// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Phases/LyraGamePhaseSubsystem.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGamePhaseSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGamePhaseAbility_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGamePhaseSubsystem();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGamePhaseSubsystem_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EPhaseTagMatchType();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventLyraGamePhaseDynamicDelegate_Parms
		{
			const ULyraGamePhaseAbility* Phase;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Phase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::NewProp_Phase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLyraGamePhaseDynamicDelegate_Parms, Phase), Z_Construct_UClass_ULyraGamePhaseAbility_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::NewProp_Phase_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::NewProp_Phase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::NewProp_Phase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "LyraGamePhaseDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::_Script_LyraGame_eventLyraGamePhaseDynamicDelegate_Parms), Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLyraGamePhaseDynamicDelegate_DelegateWrapper(const FScriptDelegate& LyraGamePhaseDynamicDelegate, const ULyraGamePhaseAbility* Phase)
{
	struct _Script_LyraGame_eventLyraGamePhaseDynamicDelegate_Parms
	{
		const ULyraGamePhaseAbility* Phase;
	};
	_Script_LyraGame_eventLyraGamePhaseDynamicDelegate_Parms Parms;
	Parms.Phase=Phase;
	LyraGamePhaseDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventLyraGamePhaseTagDynamicDelegate_Parms
		{
			FGameplayTag PhaseTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::NewProp_PhaseTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLyraGamePhaseTagDynamicDelegate_Parms, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::NewProp_PhaseTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::NewProp_PhaseTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::NewProp_PhaseTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "LyraGamePhaseTagDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::_Script_LyraGame_eventLyraGamePhaseTagDynamicDelegate_Parms), Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLyraGamePhaseTagDynamicDelegate_DelegateWrapper(const FScriptDelegate& LyraGamePhaseTagDynamicDelegate, FGameplayTag const& PhaseTag)
{
	struct _Script_LyraGame_eventLyraGamePhaseTagDynamicDelegate_Parms
	{
		FGameplayTag PhaseTag;
	};
	_Script_LyraGame_eventLyraGamePhaseTagDynamicDelegate_Parms Parms;
	Parms.PhaseTag=PhaseTag;
	LyraGamePhaseTagDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhaseTagMatchType;
	static UEnum* EPhaseTagMatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhaseTagMatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhaseTagMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EPhaseTagMatchType, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EPhaseTagMatchType"));
		}
		return Z_Registration_Info_UEnum_EPhaseTagMatchType.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<EPhaseTagMatchType>()
	{
		return EPhaseTagMatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_EPhaseTagMatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_EPhaseTagMatchType_Statics::Enumerators[] = {
		{ "EPhaseTagMatchType::ExactMatch", (int64)EPhaseTagMatchType::ExactMatch },
		{ "EPhaseTagMatchType::PartialMatch", (int64)EPhaseTagMatchType::PartialMatch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_EPhaseTagMatchType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Match rule for message receivers\n" },
		{ "ExactMatch.Comment", "// An exact match will only receive messages with exactly the same channel\n// (e.g., registering for \"A.B\" will match a broadcast of A.B but not A.B.C)\n" },
		{ "ExactMatch.Name", "EPhaseTagMatchType::ExactMatch" },
		{ "ExactMatch.ToolTip", "An exact match will only receive messages with exactly the same channel\n(e.g., registering for \"A.B\" will match a broadcast of A.B but not A.B.C)" },
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseSubsystem.h" },
		{ "PartialMatch.Comment", "// A partial match will receive any messages rooted in the same channel\n// (e.g., registering for \"A.B\" will match a broadcast of A.B as well as A.B.C)\n" },
		{ "PartialMatch.Name", "EPhaseTagMatchType::PartialMatch" },
		{ "PartialMatch.ToolTip", "A partial match will receive any messages rooted in the same channel\n(e.g., registering for \"A.B\" will match a broadcast of A.B as well as A.B.C)" },
		{ "ToolTip", "Match rule for message receivers" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EPhaseTagMatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"EPhaseTagMatchType",
		"EPhaseTagMatchType",
		Z_Construct_UEnum_LyraGame_EPhaseTagMatchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EPhaseTagMatchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_EPhaseTagMatchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EPhaseTagMatchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_EPhaseTagMatchType()
	{
		if (!Z_Registration_Info_UEnum_EPhaseTagMatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhaseTagMatchType.InnerSingleton, Z_Construct_UEnum_LyraGame_EPhaseTagMatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhaseTagMatchType.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraGamePhaseSubsystem::execK2_WhenPhaseEnds)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_PhaseTag);
		P_GET_ENUM(EPhaseTagMatchType,Z_Param_MatchType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_WhenPhaseEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_WhenPhaseEnds(Z_Param_PhaseTag,EPhaseTagMatchType(Z_Param_MatchType),FLyraGamePhaseTagDynamicDelegate(Z_Param_WhenPhaseEnd));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGamePhaseSubsystem::execK2_WhenPhaseStartsOrIsActive)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_PhaseTag);
		P_GET_ENUM(EPhaseTagMatchType,Z_Param_MatchType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_WhenPhaseActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_WhenPhaseStartsOrIsActive(Z_Param_PhaseTag,EPhaseTagMatchType(Z_Param_MatchType),FLyraGamePhaseTagDynamicDelegate(Z_Param_WhenPhaseActive));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGamePhaseSubsystem::execK2_StartPhase)
	{
		P_GET_OBJECT(UClass,Z_Param_Phase);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PhaseEnded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_StartPhase(Z_Param_Phase,FLyraGamePhaseDynamicDelegate(Z_Param_Out_PhaseEnded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGamePhaseSubsystem::execIsPhaseActive)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PhaseTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPhaseActive(Z_Param_Out_PhaseTag);
		P_NATIVE_END;
	}
	void ULyraGamePhaseSubsystem::StaticRegisterNativesULyraGamePhaseSubsystem()
	{
		UClass* Class = ULyraGamePhaseSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPhaseActive", &ULyraGamePhaseSubsystem::execIsPhaseActive },
			{ "K2_StartPhase", &ULyraGamePhaseSubsystem::execK2_StartPhase },
			{ "K2_WhenPhaseEnds", &ULyraGamePhaseSubsystem::execK2_WhenPhaseEnds },
			{ "K2_WhenPhaseStartsOrIsActive", &ULyraGamePhaseSubsystem::execK2_WhenPhaseStartsOrIsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics
	{
		struct LyraGamePhaseSubsystem_eventIsPhaseActive_Parms
		{
			FGameplayTag PhaseTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::NewProp_PhaseTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGamePhaseSubsystem_eventIsPhaseActive_Parms, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::NewProp_PhaseTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::NewProp_PhaseTag_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraGamePhaseSubsystem_eventIsPhaseActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraGamePhaseSubsystem_eventIsPhaseActive_Parms), &Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::NewProp_PhaseTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PhaseTag" },
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGamePhaseSubsystem, nullptr, "IsPhaseActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::LyraGamePhaseSubsystem_eventIsPhaseActive_Parms), Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics
	{
		struct LyraGamePhaseSubsystem_eventK2_StartPhase_Parms
		{
			TSubclassOf<ULyraGamePhaseAbility>  Phase;
			FScriptDelegate PhaseEnded;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Phase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseEnded_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PhaseEnded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGamePhaseSubsystem_eventK2_StartPhase_Parms, Phase), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraGamePhaseAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::NewProp_PhaseEnded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::NewProp_PhaseEnded = { "PhaseEnded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGamePhaseSubsystem_eventK2_StartPhase_Parms, PhaseEnded), Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::NewProp_PhaseEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::NewProp_PhaseEnded_MetaData)) }; // 2253830430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::NewProp_Phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::NewProp_PhaseEnded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PhaseEnded" },
		{ "Category", "Game Phase" },
		{ "DisplayName", "Start Phase" },
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGamePhaseSubsystem, nullptr, "K2_StartPhase", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::LyraGamePhaseSubsystem_eventK2_StartPhase_Parms), Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics
	{
		struct LyraGamePhaseSubsystem_eventK2_WhenPhaseEnds_Parms
		{
			FGameplayTag PhaseTag;
			EPhaseTagMatchType MatchType;
			FScriptDelegate WhenPhaseEnd;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_WhenPhaseEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGamePhaseSubsystem_eventK2_WhenPhaseEnds_Parms, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGamePhaseSubsystem_eventK2_WhenPhaseEnds_Parms, MatchType), Z_Construct_UEnum_LyraGame_EPhaseTagMatchType, METADATA_PARAMS(nullptr, 0) }; // 1372650243
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::NewProp_WhenPhaseEnd = { "WhenPhaseEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGamePhaseSubsystem_eventK2_WhenPhaseEnds_Parms, WhenPhaseEnd), Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1890147789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::NewProp_PhaseTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::NewProp_MatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::NewProp_MatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::NewProp_WhenPhaseEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "WhenPhaseEnd" },
		{ "Category", "Game Phase" },
		{ "DisplayName", "When Phase Ends" },
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGamePhaseSubsystem, nullptr, "K2_WhenPhaseEnds", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::LyraGamePhaseSubsystem_eventK2_WhenPhaseEnds_Parms), Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics
	{
		struct LyraGamePhaseSubsystem_eventK2_WhenPhaseStartsOrIsActive_Parms
		{
			FGameplayTag PhaseTag;
			EPhaseTagMatchType MatchType;
			FScriptDelegate WhenPhaseActive;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_WhenPhaseActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGamePhaseSubsystem_eventK2_WhenPhaseStartsOrIsActive_Parms, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGamePhaseSubsystem_eventK2_WhenPhaseStartsOrIsActive_Parms, MatchType), Z_Construct_UEnum_LyraGame_EPhaseTagMatchType, METADATA_PARAMS(nullptr, 0) }; // 1372650243
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_WhenPhaseActive = { "WhenPhaseActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGamePhaseSubsystem_eventK2_WhenPhaseStartsOrIsActive_Parms, WhenPhaseActive), Z_Construct_UDelegateFunction_LyraGame_LyraGamePhaseTagDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1890147789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_PhaseTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_MatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_MatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_WhenPhaseActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "WhenPhaseActive" },
		{ "Category", "Game Phase" },
		{ "DisplayName", "When Phase Starts or Is Active" },
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGamePhaseSubsystem, nullptr, "K2_WhenPhaseStartsOrIsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::LyraGamePhaseSubsystem_eventK2_WhenPhaseStartsOrIsActive_Parms), Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGamePhaseSubsystem);
	UClass* Z_Construct_UClass_ULyraGamePhaseSubsystem_NoRegister()
	{
		return ULyraGamePhaseSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGamePhaseSubsystem_IsPhaseActive, "IsPhaseActive" }, // 280331139
		{ &Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_StartPhase, "K2_StartPhase" }, // 2719501325
		{ &Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseEnds, "K2_WhenPhaseEnds" }, // 2858062046
		{ &Z_Construct_UFunction_ULyraGamePhaseSubsystem_K2_WhenPhaseStartsOrIsActive, "K2_WhenPhaseStartsOrIsActive" }, // 1256561326
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Subsystem for managing Lyra's game phases using gameplay tags in a nested manner, which allows parent and child \n * phases to be active at the same time, but not sibling phases.\n * Example:  Game.Playing and Game.Playing.WarmUp can coexist, but Game.Playing and Game.ShowingScore cannot. \n * When a new phase is started, any active phases that are not ancestors will be ended.\n * Example: if Game.Playing and Game.Playing.CaptureTheFlag are active when Game.Playing.PostGame is started, \n *     Game.Playing will remain active, while Game.Playing.CaptureTheFlag will end.\n */" },
		{ "IncludePath", "AbilitySystem/Phases/LyraGamePhaseSubsystem.h" },
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseSubsystem.h" },
		{ "ToolTip", "Subsystem for managing Lyra's game phases using gameplay tags in a nested manner, which allows parent and child\nphases to be active at the same time, but not sibling phases.\nExample:  Game.Playing and Game.Playing.WarmUp can coexist, but Game.Playing and Game.ShowingScore cannot.\nWhen a new phase is started, any active phases that are not ancestors will be ended.\nExample: if Game.Playing and Game.Playing.CaptureTheFlag are active when Game.Playing.PostGame is started,\n   Game.Playing will remain active, while Game.Playing.CaptureTheFlag will end." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGamePhaseSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics::ClassParams = {
		&ULyraGamePhaseSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGamePhaseSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULyraGamePhaseSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGamePhaseSubsystem.OuterSingleton, Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGamePhaseSubsystem.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGamePhaseSubsystem>()
	{
		return ULyraGamePhaseSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGamePhaseSubsystem);
	ULyraGamePhaseSubsystem::~ULyraGamePhaseSubsystem() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_Statics::EnumInfo[] = {
		{ EPhaseTagMatchType_StaticEnum, TEXT("EPhaseTagMatchType"), &Z_Registration_Info_UEnum_EPhaseTagMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1372650243U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGamePhaseSubsystem, ULyraGamePhaseSubsystem::StaticClass, TEXT("ULyraGamePhaseSubsystem"), &Z_Registration_Info_UClass_ULyraGamePhaseSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGamePhaseSubsystem), 1157417104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_1379475949(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
