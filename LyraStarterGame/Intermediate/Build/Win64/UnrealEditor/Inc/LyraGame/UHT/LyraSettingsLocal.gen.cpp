// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/LyraSettingsLocal.h"
#include "Input/LyraMappableConfigPair.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingsLocal() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsLocal();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsLocal_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLoadedMappableConfigPair();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraScalabilitySnapshot();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot;
class UScriptStruct* FLyraScalabilitySnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraScalabilitySnapshot, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraScalabilitySnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraScalabilitySnapshot>()
{
	return FLyraScalabilitySnapshot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraScalabilitySnapshot>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraScalabilitySnapshot",
		sizeof(FLyraScalabilitySnapshot),
		alignof(FLyraScalabilitySnapshot),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraScalabilitySnapshot()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.InnerSingleton, Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetInputConfigByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ConfigName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UPlayerMappableInputConfig**)Z_Param__Result=P_THIS->GetInputConfigByName(Z_Param_ConfigName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetControllerPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetControllerPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetControllerPlatform)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InControllerPlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControllerPlatform(Z_Param_InControllerPlatform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetSafeZone)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSafeZone(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetSafeZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSafeZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execIsSafeZoneSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSafeZoneSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetAudioOutputDeviceId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAudioOutputDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioOutputDeviceId(Z_Param_InAudioOutputDeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetAudioOutputDeviceId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAudioOutputDeviceId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetVoiceChatVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoiceChatVolume(Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetVoiceChatVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVoiceChatVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetDialogueVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogueVolume(Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetDialogueVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDialogueVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetSoundFXVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundFXVolume(Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetSoundFXVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSoundFXVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetMusicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMusicVolume(Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetMusicVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetOverallVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverallVolume(Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetOverallVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOverallVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execRunAutoBenchmark)
	{
		P_GET_UBOOL(Z_Param_bSaveImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunAutoBenchmark(Z_Param_bSaveImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execShouldRunAutoBenchmarkAtStartup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldRunAutoBenchmarkAtStartup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execCanRunAutoBenchmark)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRunAutoBenchmark();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetHDRAudioModeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHDRAudioModeEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execIsHDRAudioModeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHDRAudioModeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execCanModifyHeadphoneModeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanModifyHeadphoneModeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetHeadphoneModeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeadphoneModeEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execIsHeadphoneModeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHeadphoneModeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetDesiredDeviceProfileQualitySuffix)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDesiredSuffix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredDeviceProfileQualitySuffix(Z_Param_InDesiredSuffix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetDesiredDeviceProfileQualitySuffix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDesiredDeviceProfileQualitySuffix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetFrameRateLimit_Always)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLimitFPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRateLimit_Always(Z_Param_NewLimitFPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetFrameRateLimit_Always)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit_Always();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetFrameRateLimit_WhenBackgrounded)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLimitFPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRateLimit_WhenBackgrounded(Z_Param_NewLimitFPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetFrameRateLimit_WhenBackgrounded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit_WhenBackgrounded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetFrameRateLimit_InMenu)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLimitFPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRateLimit_InMenu(Z_Param_NewLimitFPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetFrameRateLimit_InMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit_InMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetFrameRateLimit_OnBattery)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLimitFPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRateLimit_OnBattery(Z_Param_NewLimitFPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetFrameRateLimit_OnBattery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit_OnBattery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execSetDisplayGamma)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InGamma);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayGamma(Z_Param_InGamma);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSettingsLocal::execGetDisplayGamma)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDisplayGamma();
		P_NATIVE_END;
	}
	void ULyraSettingsLocal::StaticRegisterNativesULyraSettingsLocal()
	{
		UClass* Class = ULyraSettingsLocal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanModifyHeadphoneModeEnabled", &ULyraSettingsLocal::execCanModifyHeadphoneModeEnabled },
			{ "CanRunAutoBenchmark", &ULyraSettingsLocal::execCanRunAutoBenchmark },
			{ "GetAudioOutputDeviceId", &ULyraSettingsLocal::execGetAudioOutputDeviceId },
			{ "GetControllerPlatform", &ULyraSettingsLocal::execGetControllerPlatform },
			{ "GetDesiredDeviceProfileQualitySuffix", &ULyraSettingsLocal::execGetDesiredDeviceProfileQualitySuffix },
			{ "GetDialogueVolume", &ULyraSettingsLocal::execGetDialogueVolume },
			{ "GetDisplayGamma", &ULyraSettingsLocal::execGetDisplayGamma },
			{ "GetFrameRateLimit_Always", &ULyraSettingsLocal::execGetFrameRateLimit_Always },
			{ "GetFrameRateLimit_InMenu", &ULyraSettingsLocal::execGetFrameRateLimit_InMenu },
			{ "GetFrameRateLimit_OnBattery", &ULyraSettingsLocal::execGetFrameRateLimit_OnBattery },
			{ "GetFrameRateLimit_WhenBackgrounded", &ULyraSettingsLocal::execGetFrameRateLimit_WhenBackgrounded },
			{ "GetInputConfigByName", &ULyraSettingsLocal::execGetInputConfigByName },
			{ "GetMusicVolume", &ULyraSettingsLocal::execGetMusicVolume },
			{ "GetOverallVolume", &ULyraSettingsLocal::execGetOverallVolume },
			{ "GetSafeZone", &ULyraSettingsLocal::execGetSafeZone },
			{ "GetSoundFXVolume", &ULyraSettingsLocal::execGetSoundFXVolume },
			{ "GetVoiceChatVolume", &ULyraSettingsLocal::execGetVoiceChatVolume },
			{ "IsHDRAudioModeEnabled", &ULyraSettingsLocal::execIsHDRAudioModeEnabled },
			{ "IsHeadphoneModeEnabled", &ULyraSettingsLocal::execIsHeadphoneModeEnabled },
			{ "IsSafeZoneSet", &ULyraSettingsLocal::execIsSafeZoneSet },
			{ "RunAutoBenchmark", &ULyraSettingsLocal::execRunAutoBenchmark },
			{ "SetAudioOutputDeviceId", &ULyraSettingsLocal::execSetAudioOutputDeviceId },
			{ "SetControllerPlatform", &ULyraSettingsLocal::execSetControllerPlatform },
			{ "SetDesiredDeviceProfileQualitySuffix", &ULyraSettingsLocal::execSetDesiredDeviceProfileQualitySuffix },
			{ "SetDialogueVolume", &ULyraSettingsLocal::execSetDialogueVolume },
			{ "SetDisplayGamma", &ULyraSettingsLocal::execSetDisplayGamma },
			{ "SetFrameRateLimit_Always", &ULyraSettingsLocal::execSetFrameRateLimit_Always },
			{ "SetFrameRateLimit_InMenu", &ULyraSettingsLocal::execSetFrameRateLimit_InMenu },
			{ "SetFrameRateLimit_OnBattery", &ULyraSettingsLocal::execSetFrameRateLimit_OnBattery },
			{ "SetFrameRateLimit_WhenBackgrounded", &ULyraSettingsLocal::execSetFrameRateLimit_WhenBackgrounded },
			{ "SetHDRAudioModeEnabled", &ULyraSettingsLocal::execSetHDRAudioModeEnabled },
			{ "SetHeadphoneModeEnabled", &ULyraSettingsLocal::execSetHeadphoneModeEnabled },
			{ "SetMusicVolume", &ULyraSettingsLocal::execSetMusicVolume },
			{ "SetOverallVolume", &ULyraSettingsLocal::execSetOverallVolume },
			{ "SetSafeZone", &ULyraSettingsLocal::execSetSafeZone },
			{ "SetSoundFXVolume", &ULyraSettingsLocal::execSetSoundFXVolume },
			{ "SetVoiceChatVolume", &ULyraSettingsLocal::execSetVoiceChatVolume },
			{ "ShouldRunAutoBenchmarkAtStartup", &ULyraSettingsLocal::execShouldRunAutoBenchmarkAtStartup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics
	{
		struct LyraSettingsLocal_eventCanModifyHeadphoneModeEnabled_Parms
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
	void Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraSettingsLocal_eventCanModifyHeadphoneModeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSettingsLocal_eventCanModifyHeadphoneModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns if we can enable/disable headphone mode (i.e., if it's not forced on or off by the platform) */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Returns if we can enable/disable headphone mode (i.e., if it's not forced on or off by the platform)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "CanModifyHeadphoneModeEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::LyraSettingsLocal_eventCanModifyHeadphoneModeEnabled_Parms), Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics
	{
		struct LyraSettingsLocal_eventCanRunAutoBenchmark_Parms
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
	void Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraSettingsLocal_eventCanRunAutoBenchmark_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSettingsLocal_eventCanRunAutoBenchmark_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns true if this platform can run the auto benchmark */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Returns true if this platform can run the auto benchmark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "CanRunAutoBenchmark", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::LyraSettingsLocal_eventCanRunAutoBenchmark_Parms), Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics
	{
		struct LyraSettingsLocal_eventGetAudioOutputDeviceId_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetAudioOutputDeviceId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the user's audio device id */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Returns the user's audio device id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetAudioOutputDeviceId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::LyraSettingsLocal_eventGetAudioOutputDeviceId_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics
	{
		struct LyraSettingsLocal_eventGetControllerPlatform_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetControllerPlatform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetControllerPlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::LyraSettingsLocal_eventGetControllerPlatform_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics
	{
		struct LyraSettingsLocal_eventGetDesiredDeviceProfileQualitySuffix_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetDesiredDeviceProfileQualitySuffix_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetDesiredDeviceProfileQualitySuffix", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::LyraSettingsLocal_eventGetDesiredDeviceProfileQualitySuffix_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics
	{
		struct LyraSettingsLocal_eventGetDialogueVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetDialogueVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetDialogueVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::LyraSettingsLocal_eventGetDialogueVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics
	{
		struct LyraSettingsLocal_eventGetDisplayGamma_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetDisplayGamma_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetDisplayGamma", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::LyraSettingsLocal_eventGetDisplayGamma_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics
	{
		struct LyraSettingsLocal_eventGetFrameRateLimit_Always_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetFrameRateLimit_Always_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetFrameRateLimit_Always", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::LyraSettingsLocal_eventGetFrameRateLimit_Always_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics
	{
		struct LyraSettingsLocal_eventGetFrameRateLimit_InMenu_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetFrameRateLimit_InMenu_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetFrameRateLimit_InMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::LyraSettingsLocal_eventGetFrameRateLimit_InMenu_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics
	{
		struct LyraSettingsLocal_eventGetFrameRateLimit_OnBattery_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetFrameRateLimit_OnBattery_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetFrameRateLimit_OnBattery", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::LyraSettingsLocal_eventGetFrameRateLimit_OnBattery_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics
	{
		struct LyraSettingsLocal_eventGetFrameRateLimit_WhenBackgrounded_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetFrameRateLimit_WhenBackgrounded_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetFrameRateLimit_WhenBackgrounded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::LyraSettingsLocal_eventGetFrameRateLimit_WhenBackgrounded_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics
	{
		struct LyraSettingsLocal_eventGetInputConfigByName_Parms
		{
			FName ConfigName;
			const UPlayerMappableInputConfig* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigName;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetInputConfigByName_Parms, ConfigName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetInputConfigByName_Parms, ReturnValue), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get an input config with a certain name. If the config doesn't exist then nullptr will be returned. */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Get an input config with a certain name. If the config doesn't exist then nullptr will be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetInputConfigByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::LyraSettingsLocal_eventGetInputConfigByName_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics
	{
		struct LyraSettingsLocal_eventGetMusicVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetMusicVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::LyraSettingsLocal_eventGetMusicVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics
	{
		struct LyraSettingsLocal_eventGetOverallVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetOverallVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetOverallVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::LyraSettingsLocal_eventGetOverallVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics
	{
		struct LyraSettingsLocal_eventGetSafeZone_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetSafeZone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetSafeZone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::LyraSettingsLocal_eventGetSafeZone_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics
	{
		struct LyraSettingsLocal_eventGetSoundFXVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetSoundFXVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetSoundFXVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::LyraSettingsLocal_eventGetSoundFXVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics
	{
		struct LyraSettingsLocal_eventGetVoiceChatVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventGetVoiceChatVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetVoiceChatVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::LyraSettingsLocal_eventGetVoiceChatVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics
	{
		struct LyraSettingsLocal_eventIsHDRAudioModeEnabled_Parms
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
	void Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraSettingsLocal_eventIsHDRAudioModeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSettingsLocal_eventIsHDRAudioModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns if we're using High Dynamic Range Audio mode (HDR Audio) **/" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Returns if we're using High Dynamic Range Audio mode (HDR Audio) *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "IsHDRAudioModeEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::LyraSettingsLocal_eventIsHDRAudioModeEnabled_Parms), Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics
	{
		struct LyraSettingsLocal_eventIsHeadphoneModeEnabled_Parms
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
	void Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraSettingsLocal_eventIsHeadphoneModeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSettingsLocal_eventIsHeadphoneModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns if we're using headphone mode (HRTF) **/" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Returns if we're using headphone mode (HRTF) *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "IsHeadphoneModeEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::LyraSettingsLocal_eventIsHeadphoneModeEnabled_Parms), Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics
	{
		struct LyraSettingsLocal_eventIsSafeZoneSet_Parms
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
	void Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraSettingsLocal_eventIsSafeZoneSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSettingsLocal_eventIsSafeZoneSet_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "IsSafeZoneSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::LyraSettingsLocal_eventIsSafeZoneSet_Parms), Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics
	{
		struct LyraSettingsLocal_eventRunAutoBenchmark_Parms
		{
			bool bSaveImmediately;
		};
		static void NewProp_bSaveImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::NewProp_bSaveImmediately_SetBit(void* Obj)
	{
		((LyraSettingsLocal_eventRunAutoBenchmark_Parms*)Obj)->bSaveImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::NewProp_bSaveImmediately = { "bSaveImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSettingsLocal_eventRunAutoBenchmark_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::NewProp_bSaveImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::NewProp_bSaveImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Run the auto benchmark, optionally saving right away */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Run the auto benchmark, optionally saving right away" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "RunAutoBenchmark", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::LyraSettingsLocal_eventRunAutoBenchmark_Parms), Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics
	{
		struct LyraSettingsLocal_eventSetAudioOutputDeviceId_Parms
		{
			FString InAudioOutputDeviceId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAudioOutputDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAudioOutputDeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::NewProp_InAudioOutputDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::NewProp_InAudioOutputDeviceId = { "InAudioOutputDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetAudioOutputDeviceId_Parms, InAudioOutputDeviceId), METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::NewProp_InAudioOutputDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::NewProp_InAudioOutputDeviceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::NewProp_InAudioOutputDeviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the user's audio device by id */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Sets the user's audio device by id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetAudioOutputDeviceId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::LyraSettingsLocal_eventSetAudioOutputDeviceId_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics
	{
		struct LyraSettingsLocal_eventSetControllerPlatform_Parms
		{
			FName InControllerPlatform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControllerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControllerPlatform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::NewProp_InControllerPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::NewProp_InControllerPlatform = { "InControllerPlatform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetControllerPlatform_Parms, InControllerPlatform), METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::NewProp_InControllerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::NewProp_InControllerPlatform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::NewProp_InControllerPlatform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Sets the controller representation to use, a single platform might support multiple kinds of controllers.  For\n// example, Win64 games could be played with both an XBox or Playstation controller.\n" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Sets the controller representation to use, a single platform might support multiple kinds of controllers.  For\nexample, Win64 games could be played with both an XBox or Playstation controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetControllerPlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::LyraSettingsLocal_eventSetControllerPlatform_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics
	{
		struct LyraSettingsLocal_eventSetDesiredDeviceProfileQualitySuffix_Parms
		{
			FString InDesiredSuffix;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDesiredSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDesiredSuffix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::NewProp_InDesiredSuffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::NewProp_InDesiredSuffix = { "InDesiredSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetDesiredDeviceProfileQualitySuffix_Parms, InDesiredSuffix), METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::NewProp_InDesiredSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::NewProp_InDesiredSuffix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::NewProp_InDesiredSuffix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetDesiredDeviceProfileQualitySuffix", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::LyraSettingsLocal_eventSetDesiredDeviceProfileQualitySuffix_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics
	{
		struct LyraSettingsLocal_eventSetDialogueVolume_Parms
		{
			float InVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetDialogueVolume_Parms, InVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetDialogueVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::LyraSettingsLocal_eventSetDialogueVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics
	{
		struct LyraSettingsLocal_eventSetDisplayGamma_Parms
		{
			float InGamma;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InGamma;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::NewProp_InGamma = { "InGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetDisplayGamma_Parms, InGamma), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::NewProp_InGamma,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetDisplayGamma", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::LyraSettingsLocal_eventSetDisplayGamma_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics
	{
		struct LyraSettingsLocal_eventSetFrameRateLimit_Always_Parms
		{
			float NewLimitFPS;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLimitFPS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetFrameRateLimit_Always_Parms, NewLimitFPS), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::NewProp_NewLimitFPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetFrameRateLimit_Always", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::LyraSettingsLocal_eventSetFrameRateLimit_Always_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics
	{
		struct LyraSettingsLocal_eventSetFrameRateLimit_InMenu_Parms
		{
			float NewLimitFPS;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLimitFPS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetFrameRateLimit_InMenu_Parms, NewLimitFPS), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::NewProp_NewLimitFPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetFrameRateLimit_InMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::LyraSettingsLocal_eventSetFrameRateLimit_InMenu_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics
	{
		struct LyraSettingsLocal_eventSetFrameRateLimit_OnBattery_Parms
		{
			float NewLimitFPS;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLimitFPS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetFrameRateLimit_OnBattery_Parms, NewLimitFPS), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::NewProp_NewLimitFPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetFrameRateLimit_OnBattery", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::LyraSettingsLocal_eventSetFrameRateLimit_OnBattery_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics
	{
		struct LyraSettingsLocal_eventSetFrameRateLimit_WhenBackgrounded_Parms
		{
			float NewLimitFPS;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLimitFPS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetFrameRateLimit_WhenBackgrounded_Parms, NewLimitFPS), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::NewProp_NewLimitFPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetFrameRateLimit_WhenBackgrounded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::LyraSettingsLocal_eventSetFrameRateLimit_WhenBackgrounded_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics
	{
		struct LyraSettingsLocal_eventSetHDRAudioModeEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LyraSettingsLocal_eventSetHDRAudioModeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSettingsLocal_eventSetHDRAudioModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Enables or disables High Dynamic Range Audio mode (HDR Audio) */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Enables or disables High Dynamic Range Audio mode (HDR Audio)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetHDRAudioModeEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::LyraSettingsLocal_eventSetHDRAudioModeEnabled_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics
	{
		struct LyraSettingsLocal_eventSetHeadphoneModeEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LyraSettingsLocal_eventSetHeadphoneModeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSettingsLocal_eventSetHeadphoneModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Enables or disables headphone mode (HRTF) - NOTE this setting will be overruled if au.DisableBinauralSpatialization is set */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Enables or disables headphone mode (HRTF) - NOTE this setting will be overruled if au.DisableBinauralSpatialization is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetHeadphoneModeEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::LyraSettingsLocal_eventSetHeadphoneModeEnabled_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics
	{
		struct LyraSettingsLocal_eventSetMusicVolume_Parms
		{
			float InVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetMusicVolume_Parms, InVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetMusicVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::LyraSettingsLocal_eventSetMusicVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics
	{
		struct LyraSettingsLocal_eventSetOverallVolume_Parms
		{
			float InVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetOverallVolume_Parms, InVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetOverallVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::LyraSettingsLocal_eventSetOverallVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics
	{
		struct LyraSettingsLocal_eventSetSafeZone_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetSafeZone_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetSafeZone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::LyraSettingsLocal_eventSetSafeZone_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics
	{
		struct LyraSettingsLocal_eventSetSoundFXVolume_Parms
		{
			float InVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetSoundFXVolume_Parms, InVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetSoundFXVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::LyraSettingsLocal_eventSetSoundFXVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics
	{
		struct LyraSettingsLocal_eventSetVoiceChatVolume_Parms
		{
			float InVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSettingsLocal_eventSetVoiceChatVolume_Parms, InVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetVoiceChatVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::LyraSettingsLocal_eventSetVoiceChatVolume_Parms), Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics
	{
		struct LyraSettingsLocal_eventShouldRunAutoBenchmarkAtStartup_Parms
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
	void Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraSettingsLocal_eventShouldRunAutoBenchmarkAtStartup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSettingsLocal_eventShouldRunAutoBenchmarkAtStartup_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns true if this user should run the auto benchmark as it has never been run */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Returns true if this user should run the auto benchmark as it has never been run" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "ShouldRunAutoBenchmarkAtStartup", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::LyraSettingsLocal_eventShouldRunAutoBenchmarkAtStartup_Parms), Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingsLocal);
	UClass* Z_Construct_UClass_ULyraSettingsLocal_NoRegister()
	{
		return ULyraSettingsLocal::StaticClass();
	}
	struct Z_Construct_UClass_ULyraSettingsLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayStatList_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayStatList_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayStatList_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayStatList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayStatList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DisplayStatList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayGamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_OnBattery_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit_OnBattery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_InMenu_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit_InMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_WhenBackgrounded_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit_WhenBackgrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileFrameRateLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MobileFrameRateLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredUserChosenDeviceProfileSuffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentAppliedDeviceProfileOverrideSuffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserChosenDeviceProfileSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserChosenDeviceProfileSuffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDesiredHeadphoneMode_MetaData[];
#endif
		static void NewProp_bDesiredHeadphoneMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDesiredHeadphoneMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHeadphoneMode_MetaData[];
#endif
		static void NewProp_bUseHeadphoneMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHeadphoneMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHDRAudioMode_MetaData[];
#endif
		static void NewProp_bUseHDRAudioMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHDRAudioMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioOutputDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioOutputDeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverallVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundFXVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceChatVolume;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlBusMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlBusMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlBusMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlBusMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSoundControlBusMixLoaded_MetaData[];
#endif
		static void NewProp_bSoundControlBusMixLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoundControlBusMixLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SafeZoneScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SafeZoneScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerPlatform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerPreset_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputConfigName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredInputConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredInputConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredInputConfigs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomKeyboardConfig_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomKeyboardConfig_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomKeyboardConfig_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CustomKeyboardConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraSettingsLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraSettingsLocal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled, "CanModifyHeadphoneModeEnabled" }, // 1412088627
		{ &Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark, "CanRunAutoBenchmark" }, // 882379553
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId, "GetAudioOutputDeviceId" }, // 1206840712
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform, "GetControllerPlatform" }, // 2228170445
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix, "GetDesiredDeviceProfileQualitySuffix" }, // 3404919451
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume, "GetDialogueVolume" }, // 748215133
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma, "GetDisplayGamma" }, // 3617352158
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always, "GetFrameRateLimit_Always" }, // 3377524367
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu, "GetFrameRateLimit_InMenu" }, // 3151231654
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery, "GetFrameRateLimit_OnBattery" }, // 4121516002
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded, "GetFrameRateLimit_WhenBackgrounded" }, // 3084245200
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName, "GetInputConfigByName" }, // 678444834
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume, "GetMusicVolume" }, // 570588809
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume, "GetOverallVolume" }, // 2853938886
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone, "GetSafeZone" }, // 2570727634
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume, "GetSoundFXVolume" }, // 2002026874
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume, "GetVoiceChatVolume" }, // 2732696095
		{ &Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled, "IsHDRAudioModeEnabled" }, // 3389685016
		{ &Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled, "IsHeadphoneModeEnabled" }, // 4134604920
		{ &Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet, "IsSafeZoneSet" }, // 3478133794
		{ &Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark, "RunAutoBenchmark" }, // 1166958779
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId, "SetAudioOutputDeviceId" }, // 202474583
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform, "SetControllerPlatform" }, // 1237796578
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix, "SetDesiredDeviceProfileQualitySuffix" }, // 880763956
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume, "SetDialogueVolume" }, // 223953484
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma, "SetDisplayGamma" }, // 174292037
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always, "SetFrameRateLimit_Always" }, // 1736033114
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu, "SetFrameRateLimit_InMenu" }, // 316359518
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery, "SetFrameRateLimit_OnBattery" }, // 2453884116
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded, "SetFrameRateLimit_WhenBackgrounded" }, // 3751004617
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled, "SetHDRAudioModeEnabled" }, // 2044520675
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled, "SetHeadphoneModeEnabled" }, // 2737368157
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume, "SetMusicVolume" }, // 1191134070
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume, "SetOverallVolume" }, // 2062647478
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone, "SetSafeZone" }, // 2508529055
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume, "SetSoundFXVolume" }, // 3146945385
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume, "SetVoiceChatVolume" }, // 2391554613
		{ &Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup, "ShouldRunAutoBenchmarkAtStartup" }, // 4041716191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraSettingsLocal\n */" },
		{ "IncludePath", "Settings/LyraSettingsLocal.h" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "ULyraSettingsLocal" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_ValueProp = { "DisplayStatList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode, METADATA_PARAMS(nullptr, 0) }; // 3946329104
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_Key_KeyProp = { "DisplayStatList_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat, METADATA_PARAMS(nullptr, 0) }; // 2215989194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_MetaData[] = {
		{ "Comment", "// List of stats to display in the HUD\n" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "List of stats to display in the HUD" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList = { "DisplayStatList", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, DisplayStatList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_MetaData)) }; // 2215989194 3946329104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayGamma_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayGamma = { "DisplayGamma", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, DisplayGamma), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_OnBattery_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_OnBattery = { "FrameRateLimit_OnBattery", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, FrameRateLimit_OnBattery), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_OnBattery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_OnBattery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_InMenu_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_InMenu = { "FrameRateLimit_InMenu", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, FrameRateLimit_InMenu), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_InMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_InMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_WhenBackgrounded_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_WhenBackgrounded = { "FrameRateLimit_WhenBackgrounded", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, FrameRateLimit_WhenBackgrounded), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_WhenBackgrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_WhenBackgrounded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MobileFrameRateLimit_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MobileFrameRateLimit = { "MobileFrameRateLimit", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, MobileFrameRateLimit), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MobileFrameRateLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MobileFrameRateLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DesiredUserChosenDeviceProfileSuffix = { "DesiredUserChosenDeviceProfileSuffix", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, DesiredUserChosenDeviceProfileSuffix), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CurrentAppliedDeviceProfileOverrideSuffix = { "CurrentAppliedDeviceProfileOverrideSuffix", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, CurrentAppliedDeviceProfileOverrideSuffix), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_UserChosenDeviceProfileSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_UserChosenDeviceProfileSuffix = { "UserChosenDeviceProfileSuffix", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, UserChosenDeviceProfileSuffix), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_UserChosenDeviceProfileSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_UserChosenDeviceProfileSuffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode_MetaData[] = {
		{ "Comment", "/** Whether we *want* to use headphone mode (HRTF); may or may not actually be applied **/" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Whether we *want* to use headphone mode (HRTF); may or may not actually be applied *" },
	};
#endif
	void Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode_SetBit(void* Obj)
	{
		((ULyraSettingsLocal*)Obj)->bDesiredHeadphoneMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode = { "bDesiredHeadphoneMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraSettingsLocal), &Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode_MetaData[] = {
		{ "Comment", "/** Whether to use headphone mode (HRTF) **/" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Whether to use headphone mode (HRTF) *" },
	};
#endif
	void Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode_SetBit(void* Obj)
	{
		((ULyraSettingsLocal*)Obj)->bUseHeadphoneMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode = { "bUseHeadphoneMode", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraSettingsLocal), &Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode_MetaData[] = {
		{ "Comment", "/** Whether to use High Dynamic Range Audio mode (HDR Audio) **/" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Whether to use High Dynamic Range Audio mode (HDR Audio) *" },
	};
#endif
	void Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode_SetBit(void* Obj)
	{
		((ULyraSettingsLocal*)Obj)->bUseHDRAudioMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode = { "bUseHDRAudioMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraSettingsLocal), &Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_AudioOutputDeviceId_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_AudioOutputDeviceId = { "AudioOutputDeviceId", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, AudioOutputDeviceId), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_AudioOutputDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_AudioOutputDeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_OverallVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_OverallVolume = { "OverallVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, OverallVolume), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_OverallVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_OverallVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, MusicVolume), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MusicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MusicVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SoundFXVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SoundFXVolume = { "SoundFXVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, SoundFXVolume), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SoundFXVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SoundFXVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DialogueVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DialogueVolume = { "DialogueVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, DialogueVolume), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DialogueVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DialogueVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_VoiceChatVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_VoiceChatVolume = { "VoiceChatVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, VoiceChatVolume), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_VoiceChatVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_VoiceChatVolume_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_ValueProp = { "ControlBusMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_Key_KeyProp = { "ControlBusMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_MetaData[] = {
		{ "Comment", "/*SoundClassName*/" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "SoundClassName" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap = { "ControlBusMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, ControlBusMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMix_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMix = { "ControlBusMix", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, ControlBusMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	void Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded_SetBit(void* Obj)
	{
		((ULyraSettingsLocal*)Obj)->bSoundControlBusMixLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded = { "bSoundControlBusMixLoaded", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraSettingsLocal), &Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SafeZoneScale_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SafeZoneScale = { "SafeZoneScale", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, SafeZoneScale), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SafeZoneScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SafeZoneScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPlatform_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the controller the player is using.  This is maps to the name of a UCommonInputBaseControllerData\n\x09 * that is available on this current platform.  The gamepad data are registered per platform, you'll find them\n\x09 * in <Platform>Game.ini files listed under +ControllerData=...\n\x09 */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "The name of the controller the player is using.  This is maps to the name of a UCommonInputBaseControllerData\nthat is available on this current platform.  The gamepad data are registered per platform, you'll find them\nin <Platform>Game.ini files listed under +ControllerData=..." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPlatform = { "ControllerPlatform", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, ControllerPlatform), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPlatform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPreset_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPreset = { "ControllerPreset", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, ControllerPreset), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_InputConfigName_MetaData[] = {
		{ "Comment", "/** The name of the current input config that the user has selected. */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "The name of the current input config that the user has selected." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_InputConfigName = { "InputConfigName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, InputConfigName), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_InputConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_InputConfigName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_RegisteredInputConfigs_Inner = { "RegisteredInputConfigs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLoadedMappableConfigPair, METADATA_PARAMS(nullptr, 0) }; // 3842060373
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_RegisteredInputConfigs_MetaData[] = {
		{ "Category", "LyraSettingsLocal" },
		{ "Comment", "/**\n\x09 * Array of currently registered input configs. This is populated by game feature plugins\n\x09 * \n\x09 * @see UGameFeatureAction_AddInputConfig\n\x09 */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Array of currently registered input configs. This is populated by game feature plugins\n\n@see UGameFeatureAction_AddInputConfig" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_RegisteredInputConfigs = { "RegisteredInputConfigs", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, RegisteredInputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_RegisteredInputConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_RegisteredInputConfigs_MetaData)) }; // 3842060373
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CustomKeyboardConfig_ValueProp = { "CustomKeyboardConfig", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CustomKeyboardConfig_Key_KeyProp = { "CustomKeyboardConfig_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CustomKeyboardConfig_MetaData[] = {
		{ "Comment", "/** Array of custom key mappings that have been set by the player. Empty by default. */" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
		{ "ToolTip", "Array of custom key mappings that have been set by the player. Empty by default." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CustomKeyboardConfig = { "CustomKeyboardConfig", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingsLocal, CustomKeyboardConfig), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CustomKeyboardConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CustomKeyboardConfig_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSettingsLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_OnBattery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_InMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_WhenBackgrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MobileFrameRateLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DesiredUserChosenDeviceProfileSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CurrentAppliedDeviceProfileOverrideSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_UserChosenDeviceProfileSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_AudioOutputDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_OverallVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MusicVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SoundFXVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DialogueVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_VoiceChatVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SafeZoneScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_InputConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_RegisteredInputConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_RegisteredInputConfigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CustomKeyboardConfig_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CustomKeyboardConfig_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CustomKeyboardConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraSettingsLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingsLocal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingsLocal_Statics::ClassParams = {
		&ULyraSettingsLocal::StaticClass,
		"GameUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraSettingsLocal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::PropPointers),
		0,
		0x408000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraSettingsLocal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraSettingsLocal()
	{
		if (!Z_Registration_Info_UClass_ULyraSettingsLocal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingsLocal.OuterSingleton, Z_Construct_UClass_ULyraSettingsLocal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraSettingsLocal.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraSettingsLocal>()
	{
		return ULyraSettingsLocal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingsLocal);
	ULyraSettingsLocal::~ULyraSettingsLocal() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ScriptStructInfo[] = {
		{ FLyraScalabilitySnapshot::StaticStruct, Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::NewStructOps, TEXT("LyraScalabilitySnapshot"), &Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraScalabilitySnapshot), 2746741477U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingsLocal, ULyraSettingsLocal::StaticClass, TEXT("ULyraSettingsLocal"), &Z_Registration_Info_UClass_ULyraSettingsLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingsLocal), 3406899635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_2848826167(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
