// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/LyraCharacterMovementComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCharacterMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCharacterMovementComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCharacterMovementComponent_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterGroundInfo();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo;
class UScriptStruct* FLyraCharacterGroundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraCharacterGroundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraCharacterGroundInfo>()
{
	return FLyraCharacterGroundInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLyraCharacterGroundInfo\n *\n *\x09Information about the ground under the character.  It only gets updated as needed.\n */" },
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
		{ "ToolTip", "FLyraCharacterGroundInfo\n\n    Information about the ground under the character.  It only gets updated as needed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraCharacterGroundInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData[] = {
		{ "Category", "LyraCharacterGroundInfo" },
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundHitResult = { "GroundHitResult", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCharacterGroundInfo, GroundHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData[] = {
		{ "Category", "LyraCharacterGroundInfo" },
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCharacterGroundInfo, GroundDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraCharacterGroundInfo",
		sizeof(FLyraCharacterGroundInfo),
		alignof(FLyraCharacterGroundInfo),
		Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterGroundInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.InnerSingleton, Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraCharacterMovementComponent::execGetGroundInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLyraCharacterGroundInfo*)Z_Param__Result=P_THIS->GetGroundInfo();
		P_NATIVE_END;
	}
	void ULyraCharacterMovementComponent::StaticRegisterNativesULyraCharacterMovementComponent()
	{
		UClass* Class = ULyraCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroundInfo", &ULyraCharacterMovementComponent::execGetGroundInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics
	{
		struct LyraCharacterMovementComponent_eventGetGroundInfo_Parms
		{
			FLyraCharacterGroundInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCharacterMovementComponent_eventGetGroundInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FLyraCharacterGroundInfo, METADATA_PARAMS(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue_MetaData)) }; // 2958121149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|CharacterMovement" },
		{ "Comment", "// Returns the current ground info.  Calling this will update the ground info if it's out of date.\n" },
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
		{ "ToolTip", "Returns the current ground info.  Calling this will update the ground info if it's out of date." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCharacterMovementComponent, nullptr, "GetGroundInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::LyraCharacterMovementComponent_eventGetGroundInfo_Parms), Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCharacterMovementComponent);
	UClass* Z_Construct_UClass_ULyraCharacterMovementComponent_NoRegister()
	{
		return ULyraCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasReplicatedAcceleration_MetaData[];
#endif
		static void NewProp_bHasReplicatedAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReplicatedAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo, "GetGroundInfo" }, // 4291454014
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraCharacterMovementComponent\n *\n *\x09The base character movement component class used by this project.\n */" },
		{ "IncludePath", "Character/LyraCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraCharacterMovementComponent\n\n    The base character movement component class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit(void* Obj)
	{
		((ULyraCharacterMovementComponent*)Obj)->bHasReplicatedAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration = { "bHasReplicatedAcceleration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraCharacterMovementComponent), &Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::ClassParams = {
		&ULyraCharacterMovementComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCharacterMovementComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraCharacterMovementComponent>()
	{
		return ULyraCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCharacterMovementComponent);
	ULyraCharacterMovementComponent::~ULyraCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ScriptStructInfo[] = {
		{ FLyraCharacterGroundInfo::StaticStruct, Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewStructOps, TEXT("LyraCharacterGroundInfo"), &Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraCharacterGroundInfo), 2958121149U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCharacterMovementComponent, ULyraCharacterMovementComponent::StaticClass, TEXT("ULyraCharacterMovementComponent"), &Z_Registration_Info_UClass_ULyraCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCharacterMovementComponent), 613769169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_4017685201(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
