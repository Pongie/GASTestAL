// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Teams/LyraTeamSubsystem.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPrivateInfo_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPublicInfo_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamSubsystem();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamSubsystem_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraTeamComparison();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraTeamTrackingInfo();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventOnLyraTeamDisplayAssetChangedDelegate_Parms
		{
			const ULyraTeamDisplayAsset* DisplayAsset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::NewProp_DisplayAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventOnLyraTeamDisplayAssetChangedDelegate_Parms, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::NewProp_DisplayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::NewProp_DisplayAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::NewProp_DisplayAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::_Script_LyraGame_eventOnLyraTeamDisplayAssetChangedDelegate_Parms), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLyraTeamDisplayAssetChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLyraTeamDisplayAssetChangedDelegate, const ULyraTeamDisplayAsset* DisplayAsset)
{
	struct _Script_LyraGame_eventOnLyraTeamDisplayAssetChangedDelegate_Parms
	{
		const ULyraTeamDisplayAsset* DisplayAsset;
	};
	_Script_LyraGame_eventOnLyraTeamDisplayAssetChangedDelegate_Parms Parms;
	Parms.DisplayAsset=DisplayAsset;
	OnLyraTeamDisplayAssetChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraTeamTrackingInfo;
class UScriptStruct* FLyraTeamTrackingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraTeamTrackingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraTeamTrackingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraTeamTrackingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LyraTeamTrackingInfo.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraTeamTrackingInfo>()
{
	return FLyraTeamTrackingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PublicInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrivateInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplayAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamDisplayAssetChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamDisplayAssetChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraTeamTrackingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PublicInfo_MetaData[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PublicInfo = { "PublicInfo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTeamTrackingInfo, PublicInfo), Z_Construct_UClass_ALyraTeamPublicInfo_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PublicInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PublicInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PrivateInfo_MetaData[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PrivateInfo = { "PrivateInfo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTeamTrackingInfo, PrivateInfo), Z_Construct_UClass_ALyraTeamPrivateInfo_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PrivateInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PrivateInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_DisplayAsset_MetaData[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTeamTrackingInfo, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_DisplayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_DisplayAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_OnTeamDisplayAssetChanged_MetaData[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_OnTeamDisplayAssetChanged = { "OnTeamDisplayAssetChanged", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTeamTrackingInfo, OnTeamDisplayAssetChanged), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamDisplayAssetChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_OnTeamDisplayAssetChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_OnTeamDisplayAssetChanged_MetaData)) }; // 1182931949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PublicInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_PrivateInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_DisplayAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewProp_OnTeamDisplayAssetChanged,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraTeamTrackingInfo",
		sizeof(FLyraTeamTrackingInfo),
		alignof(FLyraTeamTrackingInfo),
		Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraTeamTrackingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraTeamTrackingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraTeamTrackingInfo.InnerSingleton, Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraTeamTrackingInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraTeamComparison;
	static UEnum* ELyraTeamComparison_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELyraTeamComparison.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELyraTeamComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraTeamComparison, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraTeamComparison"));
		}
		return Z_Registration_Info_UEnum_ELyraTeamComparison.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ELyraTeamComparison>()
	{
		return ELyraTeamComparison_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ELyraTeamComparison_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ELyraTeamComparison_Statics::Enumerators[] = {
		{ "ELyraTeamComparison::OnSameTeam", (int64)ELyraTeamComparison::OnSameTeam },
		{ "ELyraTeamComparison::DifferentTeams", (int64)ELyraTeamComparison::DifferentTeams },
		{ "ELyraTeamComparison::InvalidArgument", (int64)ELyraTeamComparison::InvalidArgument },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ELyraTeamComparison_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Result of comparing the team affiliation for two actors\n" },
		{ "DifferentTeams.Comment", "// The actors are members of opposing teams\n" },
		{ "DifferentTeams.Name", "ELyraTeamComparison::DifferentTeams" },
		{ "DifferentTeams.ToolTip", "The actors are members of opposing teams" },
		{ "InvalidArgument.Comment", "// One (or both) of the actors was invalid or not part of any team\n" },
		{ "InvalidArgument.Name", "ELyraTeamComparison::InvalidArgument" },
		{ "InvalidArgument.ToolTip", "One (or both) of the actors was invalid or not part of any team" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "OnSameTeam.Comment", "// Both actors are members of the same team\n" },
		{ "OnSameTeam.Name", "ELyraTeamComparison::OnSameTeam" },
		{ "OnSameTeam.ToolTip", "Both actors are members of the same team" },
		{ "ToolTip", "Result of comparing the team affiliation for two actors" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraTeamComparison_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ELyraTeamComparison",
		"ELyraTeamComparison",
		Z_Construct_UEnum_LyraGame_ELyraTeamComparison_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraTeamComparison_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ELyraTeamComparison_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraTeamComparison_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ELyraTeamComparison()
	{
		if (!Z_Registration_Info_UEnum_ELyraTeamComparison.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraTeamComparison.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraTeamComparison_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELyraTeamComparison.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execGetTeamIDs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetTeamIDs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execGetEffectiveTeamDisplayAsset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
		P_GET_OBJECT(UObject,Z_Param_ViewerTeamAgent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraTeamDisplayAsset**)Z_Param__Result=P_THIS->GetEffectiveTeamDisplayAsset(Z_Param_TeamId,Z_Param_ViewerTeamAgent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execGetTeamDisplayAsset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ViewerTeamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraTeamDisplayAsset**)Z_Param__Result=P_THIS->GetTeamDisplayAsset(Z_Param_TeamId,Z_Param_ViewerTeamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execDoesTeamExist)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesTeamExist(Z_Param_TeamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execTeamHasTag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TeamHasTag(Z_Param_TeamId,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execGetTeamTagStackCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTeamTagStackCount(Z_Param_TeamId,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execRemoveTeamTagStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTeamTagStack(Z_Param_TeamId,Z_Param_Tag,Z_Param_StackCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execAddTeamTagStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTeamTagStack(Z_Param_TeamId,Z_Param_Tag,Z_Param_StackCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execCompareTeams)
	{
		P_GET_OBJECT(UObject,Z_Param_A);
		P_GET_OBJECT(UObject,Z_Param_B);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TeamIdA);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TeamIdB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELyraTeamComparison*)Z_Param__Result=P_THIS->CompareTeams(Z_Param_A,Z_Param_B,Z_Param_Out_TeamIdA,Z_Param_Out_TeamIdB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamSubsystem::execFindTeamFromActor)
	{
		P_GET_OBJECT(UObject,Z_Param_TestActor);
		P_GET_UBOOL_REF(Z_Param_Out_bIsPartOfTeam);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TeamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindTeamFromActor(Z_Param_TestActor,Z_Param_Out_bIsPartOfTeam,Z_Param_Out_TeamId);
		P_NATIVE_END;
	}
	void ULyraTeamSubsystem::StaticRegisterNativesULyraTeamSubsystem()
	{
		UClass* Class = ULyraTeamSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTeamTagStack", &ULyraTeamSubsystem::execAddTeamTagStack },
			{ "CompareTeams", &ULyraTeamSubsystem::execCompareTeams },
			{ "DoesTeamExist", &ULyraTeamSubsystem::execDoesTeamExist },
			{ "FindTeamFromActor", &ULyraTeamSubsystem::execFindTeamFromActor },
			{ "GetEffectiveTeamDisplayAsset", &ULyraTeamSubsystem::execGetEffectiveTeamDisplayAsset },
			{ "GetTeamDisplayAsset", &ULyraTeamSubsystem::execGetTeamDisplayAsset },
			{ "GetTeamIDs", &ULyraTeamSubsystem::execGetTeamIDs },
			{ "GetTeamTagStackCount", &ULyraTeamSubsystem::execGetTeamTagStackCount },
			{ "RemoveTeamTagStack", &ULyraTeamSubsystem::execRemoveTeamTagStack },
			{ "TeamHasTag", &ULyraTeamSubsystem::execTeamHasTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics
	{
		struct LyraTeamSubsystem_eventAddTeamTagStack_Parms
		{
			int32 TeamId;
			FGameplayTag Tag;
			int32 StackCount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventAddTeamTagStack_Parms, TeamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventAddTeamTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventAddTeamTagStack_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::NewProp_TeamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::NewProp_StackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "AddTeamTagStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::LyraTeamSubsystem_eventAddTeamTagStack_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics
	{
		struct LyraTeamSubsystem_eventCompareTeams_Parms
		{
			const UObject* A;
			const UObject* B;
			int32 TeamIdA;
			int32 TeamIdB;
			ELyraTeamComparison ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_B;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamIdA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamIdB;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventCompareTeams_Parms, A), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventCompareTeams_Parms, B), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_B_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_TeamIdA = { "TeamIdA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventCompareTeams_Parms, TeamIdA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_TeamIdB = { "TeamIdB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventCompareTeams_Parms, TeamIdB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventCompareTeams_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_ELyraTeamComparison, METADATA_PARAMS(nullptr, 0) }; // 524016865
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_TeamIdA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_TeamIdB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Compare the teams of two actors and returns a value indicating if they are on same teams, different teams, or one/both are invalid\n" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Compare the teams of two actors and returns a value indicating if they are on same teams, different teams, or one/both are invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "CompareTeams", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::LyraTeamSubsystem_eventCompareTeams_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics
	{
		struct LyraTeamSubsystem_eventDoesTeamExist_Parms
		{
			int32 TeamId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventDoesTeamExist_Parms, TeamId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraTeamSubsystem_eventDoesTeamExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTeamSubsystem_eventDoesTeamExist_Parms), &Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::NewProp_TeamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Returns true if the specified team exists\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Returns true if the specified team exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "DoesTeamExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::LyraTeamSubsystem_eventDoesTeamExist_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics
	{
		struct LyraTeamSubsystem_eventFindTeamFromActor_Parms
		{
			const UObject* TestActor;
			bool bIsPartOfTeam;
			int32 TeamId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TestActor;
		static void NewProp_bIsPartOfTeam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPartOfTeam;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_TestActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_TestActor = { "TestActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventFindTeamFromActor_Parms, TestActor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_TestActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_TestActor_MetaData)) };
	void Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_bIsPartOfTeam_SetBit(void* Obj)
	{
		((LyraTeamSubsystem_eventFindTeamFromActor_Parms*)Obj)->bIsPartOfTeam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_bIsPartOfTeam = { "bIsPartOfTeam", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTeamSubsystem_eventFindTeamFromActor_Parms), &Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_bIsPartOfTeam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventFindTeamFromActor_Parms, TeamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_TestActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_bIsPartOfTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::NewProp_TeamId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Returns the team this object belongs to, or INDEX_NONE if it is not part of a team\n" },
		{ "Keywords", "Get" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Returns the team this object belongs to, or INDEX_NONE if it is not part of a team" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "FindTeamFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::LyraTeamSubsystem_eventFindTeamFromActor_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics
	{
		struct LyraTeamSubsystem_eventGetEffectiveTeamDisplayAsset_Parms
		{
			int32 TeamId;
			UObject* ViewerTeamAgent;
			ULyraTeamDisplayAsset* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewerTeamAgent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetEffectiveTeamDisplayAsset_Parms, TeamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::NewProp_ViewerTeamAgent = { "ViewerTeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetEffectiveTeamDisplayAsset_Parms, ViewerTeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetEffectiveTeamDisplayAsset_Parms, ReturnValue), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::NewProp_TeamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::NewProp_ViewerTeamAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Gets the team display asset for the specified team, from the perspective of the specified team\n// (You have to specify a viewer too, in case the game mode is in a 'local player is always blue team' sort of situation)\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Gets the team display asset for the specified team, from the perspective of the specified team\n(You have to specify a viewer too, in case the game mode is in a 'local player is always blue team' sort of situation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "GetEffectiveTeamDisplayAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::LyraTeamSubsystem_eventGetEffectiveTeamDisplayAsset_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics
	{
		struct LyraTeamSubsystem_eventGetTeamDisplayAsset_Parms
		{
			int32 TeamId;
			int32 ViewerTeamId;
			ULyraTeamDisplayAsset* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ViewerTeamId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetTeamDisplayAsset_Parms, TeamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::NewProp_ViewerTeamId = { "ViewerTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetTeamDisplayAsset_Parms, ViewerTeamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetTeamDisplayAsset_Parms, ReturnValue), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::NewProp_TeamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::NewProp_ViewerTeamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Gets the team display asset for the specified team, from the perspective of the specified team\n// (You have to specify a viewer too, in case the game mode is in a 'local player is always blue team' sort of situation)\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Gets the team display asset for the specified team, from the perspective of the specified team\n(You have to specify a viewer too, in case the game mode is in a 'local player is always blue team' sort of situation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "GetTeamDisplayAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::LyraTeamSubsystem_eventGetTeamDisplayAsset_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics
	{
		struct LyraTeamSubsystem_eventGetTeamIDs_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetTeamIDs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Gets the list of teams\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Gets the list of teams" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "GetTeamIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::LyraTeamSubsystem_eventGetTeamIDs_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics
	{
		struct LyraTeamSubsystem_eventGetTeamTagStackCount_Parms
		{
			int32 TeamId;
			FGameplayTag Tag;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetTeamTagStackCount_Parms, TeamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetTeamTagStackCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventGetTeamTagStackCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::NewProp_TeamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Returns the stack count of the specified tag (or 0 if the tag is not present)\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Returns the stack count of the specified tag (or 0 if the tag is not present)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "GetTeamTagStackCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::LyraTeamSubsystem_eventGetTeamTagStackCount_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics
	{
		struct LyraTeamSubsystem_eventRemoveTeamTagStack_Parms
		{
			int32 TeamId;
			FGameplayTag Tag;
			int32 StackCount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventRemoveTeamTagStack_Parms, TeamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventRemoveTeamTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventRemoveTeamTagStack_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::NewProp_TeamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::NewProp_StackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "RemoveTeamTagStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::LyraTeamSubsystem_eventRemoveTeamTagStack_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics
	{
		struct LyraTeamSubsystem_eventTeamHasTag_Parms
		{
			int32 TeamId;
			FGameplayTag Tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventTeamHasTag_Parms, TeamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamSubsystem_eventTeamHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraTeamSubsystem_eventTeamHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTeamSubsystem_eventTeamHasTag_Parms), &Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::NewProp_TeamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Returns true if there is at least one stack of the specified tag\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "Returns true if there is at least one stack of the specified tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamSubsystem, nullptr, "TeamHasTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::LyraTeamSubsystem_eventTeamHasTag_Parms), Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTeamSubsystem);
	UClass* Z_Construct_UClass_ULyraTeamSubsystem_NoRegister()
	{
		return ULyraTeamSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTeamSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TeamMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTeamSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraTeamSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_AddTeamTagStack, "AddTeamTagStack" }, // 3077348400
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_CompareTeams, "CompareTeams" }, // 878606310
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_DoesTeamExist, "DoesTeamExist" }, // 3991680205
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_FindTeamFromActor, "FindTeamFromActor" }, // 1724382031
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_GetEffectiveTeamDisplayAsset, "GetEffectiveTeamDisplayAsset" }, // 3046715788
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamDisplayAsset, "GetTeamDisplayAsset" }, // 498260071
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamIDs, "GetTeamIDs" }, // 1616920931
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_GetTeamTagStackCount, "GetTeamTagStackCount" }, // 2722654050
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_RemoveTeamTagStack, "RemoveTeamTagStack" }, // 445164956
		{ &Z_Construct_UFunction_ULyraTeamSubsystem_TeamHasTag, "TeamHasTag" }, // 1324753421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTeamSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A subsystem for easy access to team information for team-based actors (e.g., pawns or player states) */" },
		{ "IncludePath", "Teams/LyraTeamSubsystem.h" },
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
		{ "ToolTip", "A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraTeamSubsystem_Statics::NewProp_TeamMap_ValueProp = { "TeamMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLyraTeamTrackingInfo, METADATA_PARAMS(nullptr, 0) }; // 915705791
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraTeamSubsystem_Statics::NewProp_TeamMap_Key_KeyProp = { "TeamMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTeamSubsystem_Statics::NewProp_TeamMap_MetaData[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraTeamSubsystem_Statics::NewProp_TeamMap = { "TeamMap", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTeamSubsystem, TeamMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraTeamSubsystem_Statics::NewProp_TeamMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamSubsystem_Statics::NewProp_TeamMap_MetaData)) }; // 915705791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTeamSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamSubsystem_Statics::NewProp_TeamMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamSubsystem_Statics::NewProp_TeamMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamSubsystem_Statics::NewProp_TeamMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTeamSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTeamSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTeamSubsystem_Statics::ClassParams = {
		&ULyraTeamSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraTeamSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraTeamSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTeamSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULyraTeamSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTeamSubsystem.OuterSingleton, Z_Construct_UClass_ULyraTeamSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTeamSubsystem.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTeamSubsystem>()
	{
		return ULyraTeamSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTeamSubsystem);
	ULyraTeamSubsystem::~ULyraTeamSubsystem() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics::EnumInfo[] = {
		{ ELyraTeamComparison_StaticEnum, TEXT("ELyraTeamComparison"), &Z_Registration_Info_UEnum_ELyraTeamComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 524016865U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FLyraTeamTrackingInfo::StaticStruct, Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics::NewStructOps, TEXT("LyraTeamTrackingInfo"), &Z_Registration_Info_UScriptStruct_LyraTeamTrackingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraTeamTrackingInfo), 915705791U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTeamSubsystem, ULyraTeamSubsystem::StaticClass, TEXT("ULyraTeamSubsystem"), &Z_Registration_Info_UClass_ULyraTeamSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTeamSubsystem), 1167419201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_2722211564(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
