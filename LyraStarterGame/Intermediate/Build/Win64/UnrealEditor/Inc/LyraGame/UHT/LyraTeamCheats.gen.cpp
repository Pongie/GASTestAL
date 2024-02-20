// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Teams/LyraTeamCheats.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/CheatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamCheats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamCheats();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamCheats_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraTeamCheats::execListTeams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListTeams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamCheats::execSetTeam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TeamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeam(Z_Param_TeamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTeamCheats::execCycleTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleTeam();
		P_NATIVE_END;
	}
	void ULyraTeamCheats::StaticRegisterNativesULyraTeamCheats()
	{
		UClass* Class = ULyraTeamCheats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CycleTeam", &ULyraTeamCheats::execCycleTeam },
			{ "ListTeams", &ULyraTeamCheats::execListTeams },
			{ "SetTeam", &ULyraTeamCheats::execSetTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Moves this player to the next available team, wrapping around to the\n// first team if at the end of the list of teams\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamCheats.h" },
		{ "ToolTip", "Moves this player to the next available team, wrapping around to the\nfirst team if at the end of the list of teams" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamCheats, nullptr, "CycleTeam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamCheats_CycleTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Prints a list of all of the teams\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamCheats.h" },
		{ "ToolTip", "Prints a list of all of the teams" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamCheats, nullptr, "ListTeams", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamCheats_ListTeams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics
	{
		struct LyraTeamCheats_eventSetTeam_Parms
		{
			int32 TeamID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTeamCheats_eventSetTeam_Parms, TeamID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::NewProp_TeamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Moves this player to the specified team\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamCheats.h" },
		{ "ToolTip", "Moves this player to the specified team" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamCheats, nullptr, "SetTeam", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::LyraTeamCheats_eventSetTeam_Parms), Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTeamCheats_SetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTeamCheats);
	UClass* Z_Construct_UClass_ULyraTeamCheats_NoRegister()
	{
		return ULyraTeamCheats::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTeamCheats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTeamCheats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManagerExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraTeamCheats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTeamCheats_CycleTeam, "CycleTeam" }, // 149816166
		{ &Z_Construct_UFunction_ULyraTeamCheats_ListTeams, "ListTeams" }, // 3353868288
		{ &Z_Construct_UFunction_ULyraTeamCheats_SetTeam, "SetTeam" }, // 3790806483
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTeamCheats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Cheats related to teams */" },
		{ "IncludePath", "Teams/LyraTeamCheats.h" },
		{ "ModuleRelativePath", "Teams/LyraTeamCheats.h" },
		{ "ToolTip", "Cheats related to teams" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTeamCheats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTeamCheats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTeamCheats_Statics::ClassParams = {
		&ULyraTeamCheats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraTeamCheats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCheats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTeamCheats()
	{
		if (!Z_Registration_Info_UClass_ULyraTeamCheats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTeamCheats.OuterSingleton, Z_Construct_UClass_ULyraTeamCheats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTeamCheats.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTeamCheats>()
	{
		return ULyraTeamCheats::StaticClass();
	}
	ULyraTeamCheats::ULyraTeamCheats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTeamCheats);
	ULyraTeamCheats::~ULyraTeamCheats() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTeamCheats, ULyraTeamCheats::StaticClass, TEXT("ULyraTeamCheats"), &Z_Registration_Info_UClass_ULyraTeamCheats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTeamCheats), 1239679380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_277314919(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
