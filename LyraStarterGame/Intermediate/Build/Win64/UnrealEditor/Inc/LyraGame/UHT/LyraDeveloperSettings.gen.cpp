// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Development/LyraDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDeveloperSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDeveloperSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDeveloperSettings_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ECheatExecutionTime();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCheatToRun();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECheatExecutionTime;
	static UEnum* ECheatExecutionTime_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECheatExecutionTime.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECheatExecutionTime.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ECheatExecutionTime, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ECheatExecutionTime"));
		}
		return Z_Registration_Info_UEnum_ECheatExecutionTime.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ECheatExecutionTime>()
	{
		return ECheatExecutionTime_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enumerators[] = {
		{ "ECheatExecutionTime::OnCheatManagerCreated", (int64)ECheatExecutionTime::OnCheatManagerCreated },
		{ "ECheatExecutionTime::OnPlayerPawnPossession", (int64)ECheatExecutionTime::OnPlayerPawnPossession },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "OnCheatManagerCreated.Comment", "// When the cheat manager is created\n" },
		{ "OnCheatManagerCreated.Name", "ECheatExecutionTime::OnCheatManagerCreated" },
		{ "OnCheatManagerCreated.ToolTip", "When the cheat manager is created" },
		{ "OnPlayerPawnPossession.Comment", "// When a pawn is possessed by a player\n" },
		{ "OnPlayerPawnPossession.Name", "ECheatExecutionTime::OnPlayerPawnPossession" },
		{ "OnPlayerPawnPossession.ToolTip", "When a pawn is possessed by a player" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ECheatExecutionTime",
		"ECheatExecutionTime",
		Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ECheatExecutionTime()
	{
		if (!Z_Registration_Info_UEnum_ECheatExecutionTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECheatExecutionTime.InnerSingleton, Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECheatExecutionTime.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraCheatToRun;
class UScriptStruct* FLyraCheatToRun::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCheatToRun.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraCheatToRun.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraCheatToRun, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraCheatToRun"));
	}
	return Z_Registration_Info_UScriptStruct_LyraCheatToRun.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraCheatToRun>()
{
	return FLyraCheatToRun::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraCheatToRun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Phase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Phase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cheat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Cheat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraCheatToRun>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase_MetaData[] = {
		{ "Category", "LyraCheatToRun" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCheatToRun, Phase), Z_Construct_UEnum_LyraGame_ECheatExecutionTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase_MetaData)) }; // 251732641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Cheat_MetaData[] = {
		{ "Category", "LyraCheatToRun" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Cheat = { "Cheat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCheatToRun, Cheat), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Cheat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Cheat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Cheat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraCheatToRun",
		sizeof(FLyraCheatToRun),
		alignof(FLyraCheatToRun),
		Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraCheatToRun()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraCheatToRun.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraCheatToRun.InnerSingleton, Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraCheatToRun.InnerSingleton;
	}
	void ULyraDeveloperSettings::StaticRegisterNativesULyraDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDeveloperSettings);
	UClass* Z_Construct_UClass_ULyraDeveloperSettings_NoRegister()
	{
		return ULyraDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULyraDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBotCount_MetaData[];
#endif
		static void NewProp_bOverrideBotCount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBotCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNumPlayerBotsToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideNumPlayerBotsToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPlayerBotsToAttack_MetaData[];
#endif
		static void NewProp_bAllowPlayerBotsToAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPlayerBotsToAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTestFullGameFlowInPIE_MetaData[];
#endif
		static void NewProp_bTestFullGameFlowInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestFullGameFlowInPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAlwaysPlayForceFeedback_MetaData[];
#endif
		static void NewProp_bShouldAlwaysPlayForceFeedback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAlwaysPlayForceFeedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipLoadingCosmeticBackgroundsInPIE_MetaData[];
#endif
		static void NewProp_bSkipLoadingCosmeticBackgroundsInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipLoadingCosmeticBackgroundsInPIE;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheatsToRun_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheatsToRun_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheatsToRun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogGameplayMessages_MetaData[];
#endif
		static void NewProp_LogGameplayMessages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LogGameplayMessages;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonEditorMaps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonEditorMaps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonEditorMaps;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Developer settings / editor cheats\n */" },
		{ "IncludePath", "Development/LyraDeveloperSettings.h" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "ToolTip", "Developer settings / editor cheats" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_ExperienceOverride_MetaData[] = {
		{ "AllowedTypes", "LyraExperienceDefinition" },
		{ "Category", "Lyra" },
		{ "Comment", "// The experience override to use for Play in Editor (if not set, the default for the world settings of the open map will be used)\n" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "ToolTip", "The experience override to use for Play in Editor (if not set, the default for the world settings of the open map will be used)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_ExperienceOverride = { "ExperienceOverride", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraDeveloperSettings, ExperienceOverride), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_ExperienceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_ExperienceOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount_MetaData[] = {
		{ "Category", "LyraBots" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount_SetBit(void* Obj)
	{
		((ULyraDeveloperSettings*)Obj)->bOverrideBotCount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount = { "bOverrideBotCount", nullptr, (EPropertyFlags)0x0010000000004014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_OverrideNumPlayerBotsToSpawn_MetaData[] = {
		{ "Category", "LyraBots" },
		{ "EditCondition", "bOverrideBotCount" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_OverrideNumPlayerBotsToSpawn = { "OverrideNumPlayerBotsToSpawn", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraDeveloperSettings, OverrideNumPlayerBotsToSpawn), METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_OverrideNumPlayerBotsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_OverrideNumPlayerBotsToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack_MetaData[] = {
		{ "Category", "LyraBots" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack_SetBit(void* Obj)
	{
		((ULyraDeveloperSettings*)Obj)->bAllowPlayerBotsToAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack = { "bAllowPlayerBotsToAttack", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE_MetaData[] = {
		{ "Category", "Lyra" },
		{ "Comment", "// Do the full game flow when playing in the editor, or skip 'waiting for player' / etc... game phases?\n" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "ToolTip", "Do the full game flow when playing in the editor, or skip 'waiting for player' / etc... game phases?" },
	};
#endif
	void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE_SetBit(void* Obj)
	{
		((ULyraDeveloperSettings*)Obj)->bTestFullGameFlowInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE = { "bTestFullGameFlowInPIE", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback_MetaData[] = {
		{ "Category", "Lyra" },
		{ "Comment", "/**\n\x09* Should force feedback effects be played, even if the last input device was not a gamepad?\n\x09* The default behavior in Lyra is to only play force feedback if the most recent input device was a gamepad.\n\x09*/" },
		{ "ConsoleVariable", "LyraPC.ShouldAlwaysPlayForceFeedback" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "ToolTip", "Should force feedback effects be played, even if the last input device was not a gamepad?\nThe default behavior in Lyra is to only play force feedback if the most recent input device was a gamepad." },
	};
#endif
	void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback_SetBit(void* Obj)
	{
		((ULyraDeveloperSettings*)Obj)->bShouldAlwaysPlayForceFeedback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback = { "bShouldAlwaysPlayForceFeedback", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE_MetaData[] = {
		{ "Category", "Lyra" },
		{ "Comment", "// Should game logic load cosmetic backgrounds in the editor or skip them for iteration speed?\n" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "ToolTip", "Should game logic load cosmetic backgrounds in the editor or skip them for iteration speed?" },
	};
#endif
	void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE_SetBit(void* Obj)
	{
		((ULyraDeveloperSettings*)Obj)->bSkipLoadingCosmeticBackgroundsInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE = { "bSkipLoadingCosmeticBackgroundsInPIE", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun_Inner = { "CheatsToRun", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraCheatToRun, METADATA_PARAMS(nullptr, 0) }; // 281603099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun_MetaData[] = {
		{ "Category", "Lyra" },
		{ "Comment", "// List of cheats to auto-run during 'play in editor'\n" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "ToolTip", "List of cheats to auto-run during 'play in editor'" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun = { "CheatsToRun", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraDeveloperSettings, CheatsToRun), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun_MetaData)) }; // 281603099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages_MetaData[] = {
		{ "Category", "GameplayMessages" },
		{ "Comment", "// Should messages broadcast through the gameplay message subsystem be logged?\n" },
		{ "ConsoleVariable", "GameplayMessageSubsystem.LogMessages" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "ToolTip", "Should messages broadcast through the gameplay message subsystem be logged?" },
	};
#endif
	void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages_SetBit(void* Obj)
	{
		((ULyraDeveloperSettings*)Obj)->LogGameplayMessages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages = { "LogGameplayMessages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps_Inner = { "CommonEditorMaps", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Maps" },
		{ "Comment", "/** A list of common maps that will be accessible via the editor detoolbar */" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "ToolTip", "A list of common maps that will be accessible via the editor detoolbar" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps = { "CommonEditorMaps", nullptr, (EPropertyFlags)0x0010000800004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraDeveloperSettings, CommonEditorMaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_ExperienceOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_OverrideNumPlayerBotsToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::ClassParams = {
		&ULyraDeveloperSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_ULyraDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDeveloperSettings.OuterSingleton, Z_Construct_UClass_ULyraDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraDeveloperSettings.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraDeveloperSettings>()
	{
		return ULyraDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDeveloperSettings);
	ULyraDeveloperSettings::~ULyraDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::EnumInfo[] = {
		{ ECheatExecutionTime_StaticEnum, TEXT("ECheatExecutionTime"), &Z_Registration_Info_UEnum_ECheatExecutionTime, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 251732641U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ScriptStructInfo[] = {
		{ FLyraCheatToRun::StaticStruct, Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewStructOps, TEXT("LyraCheatToRun"), &Z_Registration_Info_UScriptStruct_LyraCheatToRun, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraCheatToRun), 281603099U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDeveloperSettings, ULyraDeveloperSettings::StaticClass, TEXT("ULyraDeveloperSettings"), &Z_Registration_Info_UClass_ULyraDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDeveloperSettings), 1524864329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_1309571770(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
