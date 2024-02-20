// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Teams/LyraTeamInfoBase.h"
#include "System/GameplayTagStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamInfoBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamInfoBase();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamInfoBase_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ALyraTeamInfoBase::execOnRep_TeamId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TeamId();
		P_NATIVE_END;
	}
	void ALyraTeamInfoBase::StaticRegisterNativesALyraTeamInfoBase()
	{
		UClass* Class = ALyraTeamInfoBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_TeamId", &ALyraTeamInfoBase::execOnRep_TeamId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALyraTeamInfoBase_OnRep_TeamId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraTeamInfoBase_OnRep_TeamId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamInfoBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraTeamInfoBase_OnRep_TeamId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraTeamInfoBase, nullptr, "OnRep_TeamId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraTeamInfoBase_OnRep_TeamId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraTeamInfoBase_OnRep_TeamId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraTeamInfoBase_OnRep_TeamId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraTeamInfoBase_OnRep_TeamId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraTeamInfoBase);
	UClass* Z_Construct_UClass_ALyraTeamInfoBase_NoRegister()
	{
		return ALyraTeamInfoBase::StaticClass();
	}
	struct Z_Construct_UClass_ALyraTeamInfoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraTeamInfoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALyraTeamInfoBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraTeamInfoBase_OnRep_TeamId, "OnRep_TeamId" }, // 3595524417
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraTeamInfoBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Teams/LyraTeamInfoBase.h" },
		{ "ModuleRelativePath", "Teams/LyraTeamInfoBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamTags_MetaData[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamInfoBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamTags = { "TeamTags", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraTeamInfoBase, TeamTags), Z_Construct_UScriptStruct_FGameplayTagStackContainer, METADATA_PARAMS(Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamTags_MetaData)) }; // 685747391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamId_MetaData[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamInfoBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamId = { "TeamId", "OnRep_TeamId", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraTeamInfoBase, TeamId), METADATA_PARAMS(Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraTeamInfoBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraTeamInfoBase_Statics::NewProp_TeamId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraTeamInfoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraTeamInfoBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraTeamInfoBase_Statics::ClassParams = {
		&ALyraTeamInfoBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALyraTeamInfoBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamInfoBase_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraTeamInfoBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamInfoBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraTeamInfoBase()
	{
		if (!Z_Registration_Info_UClass_ALyraTeamInfoBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraTeamInfoBase.OuterSingleton, Z_Construct_UClass_ALyraTeamInfoBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraTeamInfoBase.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraTeamInfoBase>()
	{
		return ALyraTeamInfoBase::StaticClass();
	}

	void ALyraTeamInfoBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TeamTags(TEXT("TeamTags"));
		static const FName Name_TeamId(TEXT("TeamId"));

		const bool bIsValid = true
			&& Name_TeamTags == ClassReps[(int32)ENetFields_Private::TeamTags].Property->GetFName()
			&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraTeamInfoBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraTeamInfoBase);
	ALyraTeamInfoBase::~ALyraTeamInfoBase() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraTeamInfoBase, ALyraTeamInfoBase::StaticClass, TEXT("ALyraTeamInfoBase"), &Z_Registration_Info_UClass_ALyraTeamInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraTeamInfoBase), 2164215147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_2170320545(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
