// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraRangedWeaponInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySourceInterface_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraRangedWeaponInstance();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraRangedWeaponInstance_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraRangedWeaponInstance::StaticRegisterNativesULyraRangedWeaponInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraRangedWeaponInstance);
	UClass* Z_Construct_UClass_ULyraRangedWeaponInstance_NoRegister()
	{
		return ULyraRangedWeaponInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULyraRangedWeaponInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MinHeat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_MinHeat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MaxHeat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_MaxHeat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MinSpreadAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_MinSpreadAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MaxSpreadAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_MaxSpreadAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_CurrentHeat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_CurrentHeat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_CurrentSpreadAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_CurrentSpreadAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_CurrentSpreadAngleMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_CurrentSpreadAngleMultiplier;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeatToSpreadCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeatToSpreadCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeatToHeatPerShotCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeatToHeatPerShotCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeatToCoolDownPerSecondCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeatToCoolDownPerSecondCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadRecoveryCooldownDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadRecoveryCooldownDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFirstShotAccuracy_MetaData[];
#endif
		static void NewProp_bAllowFirstShotAccuracy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFirstShotAccuracy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleMultiplier_Aiming_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleMultiplier_Aiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleMultiplier_StandingStill_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleMultiplier_StandingStill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRate_StandingStill_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRate_StandingStill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingStillSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingStillSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingStillToMovingSpeedRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingStillToMovingSpeedRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleMultiplier_Crouching_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleMultiplier_Crouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRate_Crouching_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRate_Crouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleMultiplier_JumpingOrFalling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleMultiplier_JumpingOrFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRate_JumpingOrFalling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRate_JumpingOrFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletsPerCartridge_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BulletsPerCartridge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamageRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamageRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletTraceSweepRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletTraceSweepRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceDamageFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceDamageFalloff;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialDamageMultiplier_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialDamageMultiplier_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDamageMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialDamageMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraWeaponInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraRangedWeaponInstance\n *\n * A piece of equipment representing a ranged weapon spawned and applied to a pawn\n */" },
		{ "IncludePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraRangedWeaponInstance\n\nA piece of equipment representing a ranged weapon spawned and applied to a pawn" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinHeat_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinHeat = { "Debug_MinHeat", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_MinHeat), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinHeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinHeat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxHeat_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxHeat = { "Debug_MaxHeat", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_MaxHeat), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxHeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxHeat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinSpreadAngle_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinSpreadAngle = { "Debug_MinSpreadAngle", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_MinSpreadAngle), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinSpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinSpreadAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxSpreadAngle_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxSpreadAngle = { "Debug_MaxSpreadAngle", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_MaxSpreadAngle), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxSpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxSpreadAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentHeat_MetaData[] = {
		{ "Category", "Spread Debugging" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentHeat = { "Debug_CurrentHeat", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_CurrentHeat), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentHeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentHeat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngle_MetaData[] = {
		{ "Category", "Spread Debugging" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngle = { "Debug_CurrentSpreadAngle", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_CurrentSpreadAngle), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngleMultiplier_MetaData[] = {
		{ "Category", "Spread Debugging" },
		{ "Comment", "// The current *combined* spread angle multiplier\n" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "The current *combined* spread angle multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngleMultiplier = { "Debug_CurrentSpreadAngleMultiplier", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_CurrentSpreadAngleMultiplier), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngleMultiplier_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadExponent_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "// Spread exponent, affects how tightly shots will cluster around the center line\n// when the weapon has spread (non-perfect accuracy). Higher values will cause shots\n// to be closer to the center (default is 1.0 which means uniformly within the spread range)\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Spread exponent, affects how tightly shots will cluster around the center line\nwhen the weapon has spread (non-perfect accuracy). Higher values will cause shots\nto be closer to the center (default is 1.0 which means uniformly within the spread range)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadExponent = { "SpreadExponent", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadExponent), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToSpreadCurve_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "Comment", "// A curve that maps the heat to the spread angle\n// The X range of this curve typically sets the min/max heat range of the weapon\n// The Y range of this curve is used to define the min and maximum spread angle\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "A curve that maps the heat to the spread angle\nThe X range of this curve typically sets the min/max heat range of the weapon\nThe Y range of this curve is used to define the min and maximum spread angle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToSpreadCurve = { "HeatToSpreadCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, HeatToSpreadCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToSpreadCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToSpreadCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToHeatPerShotCurve_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "Comment", "// A curve that maps the current heat to the amount a single shot will further 'heat up'\n// This is typically a flat curve with a single data point indicating how much heat a shot adds,\n// but can be other shapes to do things like punish overheating by adding progressively more heat.\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "A curve that maps the current heat to the amount a single shot will further 'heat up'\nThis is typically a flat curve with a single data point indicating how much heat a shot adds,\nbut can be other shapes to do things like punish overheating by adding progressively more heat." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToHeatPerShotCurve = { "HeatToHeatPerShotCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, HeatToHeatPerShotCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToHeatPerShotCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToHeatPerShotCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToCoolDownPerSecondCurve_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "Comment", "// A curve that maps the current heat to the heat cooldown rate per second\n// This is typically a flat curve with a single data point indicating how fast the heat\n// wears off, but can be other shapes to do things like punish overheating by slowing down\n// recovery at high heat.\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "A curve that maps the current heat to the heat cooldown rate per second\nThis is typically a flat curve with a single data point indicating how fast the heat\nwears off, but can be other shapes to do things like punish overheating by slowing down\nrecovery at high heat." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToCoolDownPerSecondCurve = { "HeatToCoolDownPerSecondCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, HeatToCoolDownPerSecondCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToCoolDownPerSecondCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToCoolDownPerSecondCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadRecoveryCooldownDelay_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "Comment", "// Time since firing before spread cooldown recovery begins (in seconds)\n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Time since firing before spread cooldown recovery begins (in seconds)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadRecoveryCooldownDelay = { "SpreadRecoveryCooldownDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadRecoveryCooldownDelay), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadRecoveryCooldownDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadRecoveryCooldownDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "Comment", "// Should the weapon have perfect accuracy when both player and weapon spread are at their minimum value\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Should the weapon have perfect accuracy when both player and weapon spread are at their minimum value" },
	};
#endif
	void Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy_SetBit(void* Obj)
	{
		((ULyraRangedWeaponInstance*)Obj)->bAllowFirstShotAccuracy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy = { "bAllowFirstShotAccuracy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraRangedWeaponInstance), &Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Aiming_MetaData[] = {
		{ "Category", "Spread|Player Params" },
		{ "Comment", "// Multiplier when in an aiming camera mode\n" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Multiplier when in an aiming camera mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Aiming = { "SpreadAngleMultiplier_Aiming", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadAngleMultiplier_Aiming), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Aiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Aiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_StandingStill_MetaData[] = {
		{ "Category", "Spread|Player Params" },
		{ "Comment", "// Multiplier when standing still or moving very slowly\n// (starts to fade out at StandingStillSpeedThreshold, and is gone completely by StandingStillSpeedThreshold + StandingStillToMovingSpeedRange)\n" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Multiplier when standing still or moving very slowly\n(starts to fade out at StandingStillSpeedThreshold, and is gone completely by StandingStillSpeedThreshold + StandingStillToMovingSpeedRange)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_StandingStill = { "SpreadAngleMultiplier_StandingStill", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadAngleMultiplier_StandingStill), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_StandingStill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_StandingStill_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_StandingStill_MetaData[] = {
		{ "Category", "Spread|Player Params" },
		{ "Comment", "// Rate at which we transition to/from the standing still accuracy (higher values are faster, though zero is instant; @see FInterpTo)\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Rate at which we transition to/from the standing still accuracy (higher values are faster, though zero is instant; @see FInterpTo)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_StandingStill = { "TransitionRate_StandingStill", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, TransitionRate_StandingStill), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_StandingStill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_StandingStill_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillSpeedThreshold_MetaData[] = {
		{ "Category", "Spread|Player Params" },
		{ "Comment", "// Speeds at or below this are considered standing still\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Speeds at or below this are considered standing still" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillSpeedThreshold = { "StandingStillSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, StandingStillSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillToMovingSpeedRange_MetaData[] = {
		{ "Category", "Spread|Player Params" },
		{ "Comment", "// Speeds no more than this above StandingStillSpeedThreshold are used to feather down the standing still bonus until it's back to 1.0\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Speeds no more than this above StandingStillSpeedThreshold are used to feather down the standing still bonus until it's back to 1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillToMovingSpeedRange = { "StandingStillToMovingSpeedRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, StandingStillToMovingSpeedRange), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillToMovingSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillToMovingSpeedRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Crouching_MetaData[] = {
		{ "Category", "Spread|Player Params" },
		{ "Comment", "// Multiplier when crouching, smoothly blended to based on TransitionRate_Crouching\n" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Multiplier when crouching, smoothly blended to based on TransitionRate_Crouching" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Crouching = { "SpreadAngleMultiplier_Crouching", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadAngleMultiplier_Crouching), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Crouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Crouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_Crouching_MetaData[] = {
		{ "Category", "Spread|Player Params" },
		{ "Comment", "// Rate at which we transition to/from the crouching accuracy (higher values are faster, though zero is instant; @see FInterpTo)\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Rate at which we transition to/from the crouching accuracy (higher values are faster, though zero is instant; @see FInterpTo)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_Crouching = { "TransitionRate_Crouching", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, TransitionRate_Crouching), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_Crouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_Crouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_JumpingOrFalling_MetaData[] = {
		{ "Category", "Spread|Player Params" },
		{ "Comment", "// Spread multiplier while jumping/falling, smoothly blended to based on TransitionRate_JumpingOrFalling\n" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Spread multiplier while jumping/falling, smoothly blended to based on TransitionRate_JumpingOrFalling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_JumpingOrFalling = { "SpreadAngleMultiplier_JumpingOrFalling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadAngleMultiplier_JumpingOrFalling), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_JumpingOrFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_JumpingOrFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_JumpingOrFalling_MetaData[] = {
		{ "Category", "Spread|Player Params" },
		{ "Comment", "// Rate at which we transition to/from the jumping/falling accuracy (higher values are faster, though zero is instant; @see FInterpTo)\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Rate at which we transition to/from the jumping/falling accuracy (higher values are faster, though zero is instant; @see FInterpTo)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_JumpingOrFalling = { "TransitionRate_JumpingOrFalling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, TransitionRate_JumpingOrFalling), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_JumpingOrFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_JumpingOrFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletsPerCartridge_MetaData[] = {
		{ "Category", "Weapon Config" },
		{ "Comment", "// Number of bullets to fire in a single cartridge (typically 1, but may be more for shotguns)\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "Number of bullets to fire in a single cartridge (typically 1, but may be more for shotguns)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletsPerCartridge = { "BulletsPerCartridge", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, BulletsPerCartridge), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletsPerCartridge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletsPerCartridge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxDamageRange_MetaData[] = {
		{ "Category", "Weapon Config" },
		{ "Comment", "// The maximum distance at which this weapon can deal damage\n" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "The maximum distance at which this weapon can deal damage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxDamageRange = { "MaxDamageRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, MaxDamageRange), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxDamageRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxDamageRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletTraceSweepRadius_MetaData[] = {
		{ "Category", "Weapon Config" },
		{ "Comment", "// The radius for bullet traces sweep spheres (0.0 will result in a line trace)\n" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "The radius for bullet traces sweep spheres (0.0 will result in a line trace)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletTraceSweepRadius = { "BulletTraceSweepRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, BulletTraceSweepRadius), METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletTraceSweepRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletTraceSweepRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_DistanceDamageFalloff_MetaData[] = {
		{ "Category", "Weapon Config" },
		{ "Comment", "// A curve that maps the distance (in cm) to a multiplier on the base damage from the associated gameplay effect\n// If there is no data in this curve, then the weapon is assumed to have no falloff with distance\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "A curve that maps the distance (in cm) to a multiplier on the base damage from the associated gameplay effect\nIf there is no data in this curve, then the weapon is assumed to have no falloff with distance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_DistanceDamageFalloff = { "DistanceDamageFalloff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, DistanceDamageFalloff), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_DistanceDamageFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_DistanceDamageFalloff_MetaData)) }; // 1477693291
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_ValueProp = { "MaterialDamageMultiplier", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_Key_KeyProp = { "MaterialDamageMultiplier_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_MetaData[] = {
		{ "Category", "Weapon Config" },
		{ "Comment", "// List of special tags that affect how damage is dealt\n// These tags will be compared to tags in the physical material of the thing being hit\n// If more than one tag is present, the multipliers will be combined multiplicatively\n" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ToolTip", "List of special tags that affect how damage is dealt\nThese tags will be compared to tags in the physical material of the thing being hit\nIf more than one tag is present, the multipliers will be combined multiplicatively" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier = { "MaterialDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraRangedWeaponInstance, MaterialDamageMultiplier), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinHeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxHeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinSpreadAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxSpreadAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentHeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngleMultiplier,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToSpreadCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToHeatPerShotCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToCoolDownPerSecondCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadRecoveryCooldownDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Aiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_StandingStill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_StandingStill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillToMovingSpeedRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Crouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_Crouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_JumpingOrFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_JumpingOrFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletsPerCartridge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxDamageRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletTraceSweepRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_DistanceDamageFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULyraAbilitySourceInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraRangedWeaponInstance, ILyraAbilitySourceInterface), false },  // 4183690893
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraRangedWeaponInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::ClassParams = {
		&ULyraRangedWeaponInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraRangedWeaponInstance()
	{
		if (!Z_Registration_Info_UClass_ULyraRangedWeaponInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraRangedWeaponInstance.OuterSingleton, Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraRangedWeaponInstance.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraRangedWeaponInstance>()
	{
		return ULyraRangedWeaponInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraRangedWeaponInstance);
	ULyraRangedWeaponInstance::~ULyraRangedWeaponInstance() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraRangedWeaponInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraRangedWeaponInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraRangedWeaponInstance, ULyraRangedWeaponInstance::StaticClass, TEXT("ULyraRangedWeaponInstance"), &Z_Registration_Info_UClass_ULyraRangedWeaponInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraRangedWeaponInstance), 3863358086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraRangedWeaponInstance_h_3733272878(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraRangedWeaponInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraRangedWeaponInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
