// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/LyraCameraMode_ThirdPerson.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Camera/LyraPenetrationAvoidanceFeeler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCameraMode_ThirdPerson() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_ThirdPerson();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_ThirdPerson_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraCameraMode_ThirdPerson::StaticRegisterNativesULyraCameraMode_ThirdPerson()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCameraMode_ThirdPerson);
	UClass* Z_Construct_UClass_ULyraCameraMode_ThirdPerson_NoRegister()
	{
		return ULyraCameraMode_ThirdPerson::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetOffsetCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRuntimeFloatCurves_MetaData[];
#endif
		static void NewProp_bUseRuntimeFloatCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRuntimeFloatCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffsetX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffsetY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffsetZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchOffsetBlendMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchOffsetBlendMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventPenetration_MetaData[];
#endif
		static void NewProp_bPreventPenetration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventPenetration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoPredictiveAvoidance_MetaData[];
#endif
		static void NewProp_bDoPredictiveAvoidance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPredictiveAvoidance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPushOutDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionPushOutDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReportPenetrationPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReportPenetrationPercent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PenetrationAvoidanceFeelers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationAvoidanceFeelers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PenetrationAvoidanceFeelers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLineToDesiredPosBlockedPct_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimLineToDesiredPosBlockedPct;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugActorsHitDuringCameraPenetration_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugActorsHitDuringCameraPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugActorsHitDuringCameraPenetration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraCameraMode,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraCameraMode_ThirdPerson\n *\n *\x09""A basic third person camera mode.\n */" },
		{ "IncludePath", "Camera/LyraCameraMode_ThirdPerson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
		{ "ToolTip", "ULyraCameraMode_ThirdPerson\n\n    A basic third person camera mode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve_MetaData[] = {
		{ "Category", "Third Person" },
		{ "Comment", "// Curve that defines local-space offsets from the target using the view pitch to evaluate the curve.\n" },
		{ "EditCondition", "!bUseRuntimeFloatCurves" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Curve that defines local-space offsets from the target using the view pitch to evaluate the curve." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve = { "TargetOffsetCurve", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, TargetOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves_MetaData[] = {
		{ "Category", "Third Person" },
		{ "Comment", "// UE-103986: Live editing of RuntimeFloatCurves during PIE does not work (unlike curve assets).\n// Once that is resolved this will become the default and TargetOffsetCurve will be removed.\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
		{ "ToolTip", "UE-103986: Live editing of RuntimeFloatCurves during PIE does not work (unlike curve assets).\nOnce that is resolved this will become the default and TargetOffsetCurve will be removed." },
	};
#endif
	void Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves_SetBit(void* Obj)
	{
		((ULyraCameraMode_ThirdPerson*)Obj)->bUseRuntimeFloatCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves = { "bUseRuntimeFloatCurves", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraCameraMode_ThirdPerson), &Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetX_MetaData[] = {
		{ "Category", "Third Person" },
		{ "EditCondition", "bUseRuntimeFloatCurves" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetX = { "TargetOffsetX", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, TargetOffsetX), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetX_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetY_MetaData[] = {
		{ "Category", "Third Person" },
		{ "EditCondition", "bUseRuntimeFloatCurves" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetY = { "TargetOffsetY", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, TargetOffsetY), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetY_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetZ_MetaData[] = {
		{ "Category", "Third Person" },
		{ "EditCondition", "bUseRuntimeFloatCurves" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetZ = { "TargetOffsetZ", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, TargetOffsetZ), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetZ_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CrouchOffsetBlendMultiplier_MetaData[] = {
		{ "Category", "Third Person" },
		{ "Comment", "// Alters the speed that a crouch offset is blended in or out\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
		{ "ToolTip", "Alters the speed that a crouch offset is blended in or out" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CrouchOffsetBlendMultiplier = { "CrouchOffsetBlendMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, CrouchOffsetBlendMultiplier), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CrouchOffsetBlendMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CrouchOffsetBlendMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendInTime_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendInTime = { "PenetrationBlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, PenetrationBlendInTime), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime = { "PenetrationBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, PenetrationBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** If true, does collision checks to keep the camera out of the world. */" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
		{ "ToolTip", "If true, does collision checks to keep the camera out of the world." },
	};
#endif
	void Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration_SetBit(void* Obj)
	{
		((ULyraCameraMode_ThirdPerson*)Obj)->bPreventPenetration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration = { "bPreventPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraCameraMode_ThirdPerson), &Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping. */" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
		{ "ToolTip", "If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping." },
	};
#endif
	void Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_SetBit(void* Obj)
	{
		((ULyraCameraMode_ThirdPerson*)Obj)->bDoPredictiveAvoidance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance = { "bDoPredictiveAvoidance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraCameraMode_ThirdPerson), &Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CollisionPushOutDistance_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CollisionPushOutDistance = { "CollisionPushOutDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, CollisionPushOutDistance), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CollisionPushOutDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CollisionPushOutDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_ReportPenetrationPercent_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** When the camera's distance is pushed into this percentage of its full distance due to penetration */" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
		{ "ToolTip", "When the camera's distance is pushed into this percentage of its full distance due to penetration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_ReportPenetrationPercent = { "ReportPenetrationPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, ReportPenetrationPercent), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_ReportPenetrationPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_ReportPenetrationPercent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers_Inner = { "PenetrationAvoidanceFeelers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler, METADATA_PARAMS(nullptr, 0) }; // 578171888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * These are the feeler rays that are used to find where to place the camera.\n\x09 * Index: 0  : This is the normal feeler we use to prevent collisions.\n\x09 * Index: 1+ : These feelers are used if you bDoPredictiveAvoidance=true, to scan for potential impacts if the player\n\x09 *             were to rotate towards that direction and primitively collide the camera so that it pulls in before\n\x09 *             impacting the occluder.\n\x09 */" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
		{ "ToolTip", "These are the feeler rays that are used to find where to place the camera.\nIndex: 0  : This is the normal feeler we use to prevent collisions.\nIndex: 1+ : These feelers are used if you bDoPredictiveAvoidance=true, to scan for potential impacts if the player\n            were to rotate towards that direction and primitively collide the camera so that it pulls in before\n            impacting the occluder." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers = { "PenetrationAvoidanceFeelers", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, PenetrationAvoidanceFeelers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers_MetaData)) }; // 578171888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_AimLineToDesiredPosBlockedPct_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_AimLineToDesiredPosBlockedPct = { "AimLineToDesiredPosBlockedPct", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, AimLineToDesiredPosBlockedPct), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_AimLineToDesiredPosBlockedPct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_AimLineToDesiredPosBlockedPct_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration_Inner = { "DebugActorsHitDuringCameraPenetration", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraCameraMode_ThirdPerson.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration = { "DebugActorsHitDuringCameraPenetration", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode_ThirdPerson, DebugActorsHitDuringCameraPenetration), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CrouchOffsetBlendMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_CollisionPushOutDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_ReportPenetrationPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_AimLineToDesiredPosBlockedPct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCameraMode_ThirdPerson>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::ClassParams = {
		&ULyraCameraMode_ThirdPerson::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCameraMode_ThirdPerson()
	{
		if (!Z_Registration_Info_UClass_ULyraCameraMode_ThirdPerson.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCameraMode_ThirdPerson.OuterSingleton, Z_Construct_UClass_ULyraCameraMode_ThirdPerson_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCameraMode_ThirdPerson.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraCameraMode_ThirdPerson>()
	{
		return ULyraCameraMode_ThirdPerson::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCameraMode_ThirdPerson);
	ULyraCameraMode_ThirdPerson::~ULyraCameraMode_ThirdPerson() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_ThirdPerson_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_ThirdPerson_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCameraMode_ThirdPerson, ULyraCameraMode_ThirdPerson::StaticClass, TEXT("ULyraCameraMode_ThirdPerson"), &Z_Registration_Info_UClass_ULyraCameraMode_ThirdPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCameraMode_ThirdPerson), 1009659647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_ThirdPerson_h_525078567(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_ThirdPerson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_ThirdPerson_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
