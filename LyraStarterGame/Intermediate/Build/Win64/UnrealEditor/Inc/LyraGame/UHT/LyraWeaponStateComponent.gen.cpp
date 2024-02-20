// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/LyraWeaponStateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponStateComponent() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponStateComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponStateComponent_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraWeaponStateComponent::execClientConfirmTargetData)
	{
		P_GET_PROPERTY(FUInt16Property,Z_Param_UniqueId);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_TARRAY(uint8,Z_Param_HitReplaces);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientConfirmTargetData_Implementation(Z_Param_UniqueId,Z_Param_bSuccess,Z_Param_HitReplaces);
		P_NATIVE_END;
	}
	struct LyraWeaponStateComponent_eventClientConfirmTargetData_Parms
	{
		uint16 UniqueId;
		bool bSuccess;
		TArray<uint8> HitReplaces;
	};
	static FName NAME_ULyraWeaponStateComponent_ClientConfirmTargetData = FName(TEXT("ClientConfirmTargetData"));
	void ULyraWeaponStateComponent::ClientConfirmTargetData(uint16 UniqueId, bool bSuccess, TArray<uint8> const& HitReplaces)
	{
		LyraWeaponStateComponent_eventClientConfirmTargetData_Parms Parms;
		Parms.UniqueId=UniqueId;
		Parms.bSuccess=bSuccess ? true : false;
		Parms.HitReplaces=HitReplaces;
		ProcessEvent(FindFunctionChecked(NAME_ULyraWeaponStateComponent_ClientConfirmTargetData),&Parms);
	}
	void ULyraWeaponStateComponent::StaticRegisterNativesULyraWeaponStateComponent()
	{
		UClass* Class = ULyraWeaponStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientConfirmTargetData", &ULyraWeaponStateComponent::execClientConfirmTargetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics
	{
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_UniqueId;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HitReplaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitReplaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitReplaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponStateComponent_eventClientConfirmTargetData_Parms, UniqueId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LyraWeaponStateComponent_eventClientConfirmTargetData_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraWeaponStateComponent_eventClientConfirmTargetData_Parms), &Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces_Inner = { "HitReplaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces = { "HitReplaces", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponStateComponent_eventClientConfirmTargetData_Parms, HitReplaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponStateComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponStateComponent, nullptr, "ClientConfirmTargetData", nullptr, nullptr, sizeof(LyraWeaponStateComponent_eventClientConfirmTargetData_Parms), Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponStateComponent);
	UClass* Z_Construct_UClass_ULyraWeaponStateComponent_NoRegister()
	{
		return ULyraWeaponStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraWeaponStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraWeaponStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControllerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraWeaponStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData, "ClientConfirmTargetData" }, // 4093579915
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponStateComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Tracks weapon state and recent confirmed hit markers to display on screen\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Weapons/LyraWeaponStateComponent.h" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponStateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Tracks weapon state and recent confirmed hit markers to display on screen" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraWeaponStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponStateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponStateComponent_Statics::ClassParams = {
		&ULyraWeaponStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraWeaponStateComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraWeaponStateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponStateComponent.OuterSingleton, Z_Construct_UClass_ULyraWeaponStateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraWeaponStateComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponStateComponent>()
	{
		return ULyraWeaponStateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponStateComponent);
	ULyraWeaponStateComponent::~ULyraWeaponStateComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWeaponStateComponent, ULyraWeaponStateComponent::StaticClass, TEXT("ULyraWeaponStateComponent"), &Z_Registration_Info_UClass_ULyraWeaponStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponStateComponent), 1078769146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_674149304(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
