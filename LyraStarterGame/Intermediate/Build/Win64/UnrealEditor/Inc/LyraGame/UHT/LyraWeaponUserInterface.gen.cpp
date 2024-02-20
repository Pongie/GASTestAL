// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Weapons/LyraWeaponUserInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponUserInterface() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponUserInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponUserInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct LyraWeaponUserInterface_eventOnWeaponChanged_Parms
	{
		ULyraWeaponInstance* OldWeapon;
		ULyraWeaponInstance* NewWeapon;
	};
	static FName NAME_ULyraWeaponUserInterface_OnWeaponChanged = FName(TEXT("OnWeaponChanged"));
	void ULyraWeaponUserInterface::OnWeaponChanged(ULyraWeaponInstance* OldWeapon, ULyraWeaponInstance* NewWeapon)
	{
		LyraWeaponUserInterface_eventOnWeaponChanged_Parms Parms;
		Parms.OldWeapon=OldWeapon;
		Parms.NewWeapon=NewWeapon;
		ProcessEvent(FindFunctionChecked(NAME_ULyraWeaponUserInterface_OnWeaponChanged),&Parms);
	}
	void ULyraWeaponUserInterface::StaticRegisterNativesULyraWeaponUserInterface()
	{
	}
	struct Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponUserInterface_eventOnWeaponChanged_Parms, OldWeapon), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWeaponUserInterface_eventOnWeaponChanged_Parms, NewWeapon), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::NewProp_OldWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::NewProp_NewWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Weapons/LyraWeaponUserInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponUserInterface, nullptr, "OnWeaponChanged", nullptr, nullptr, sizeof(LyraWeaponUserInterface_eventOnWeaponChanged_Parms), Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponUserInterface);
	UClass* Z_Construct_UClass_ULyraWeaponUserInterface_NoRegister()
	{
		return ULyraWeaponUserInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULyraWeaponUserInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraWeaponUserInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraWeaponUserInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged, "OnWeaponChanged" }, // 541126800
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponUserInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Weapons/LyraWeaponUserInterface.h" },
		{ "ModuleRelativePath", "UI/Weapons/LyraWeaponUserInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponUserInterface_Statics::NewProp_CurrentInstance_MetaData[] = {
		{ "ModuleRelativePath", "UI/Weapons/LyraWeaponUserInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraWeaponUserInterface_Statics::NewProp_CurrentInstance = { "CurrentInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraWeaponUserInterface, CurrentInstance), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponUserInterface_Statics::NewProp_CurrentInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponUserInterface_Statics::NewProp_CurrentInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraWeaponUserInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponUserInterface_Statics::NewProp_CurrentInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraWeaponUserInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponUserInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponUserInterface_Statics::ClassParams = {
		&ULyraWeaponUserInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraWeaponUserInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponUserInterface_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponUserInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponUserInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraWeaponUserInterface()
	{
		if (!Z_Registration_Info_UClass_ULyraWeaponUserInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponUserInterface.OuterSingleton, Z_Construct_UClass_ULyraWeaponUserInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraWeaponUserInterface.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponUserInterface>()
	{
		return ULyraWeaponUserInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponUserInterface);
	ULyraWeaponUserInterface::~ULyraWeaponUserInterface() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraWeaponUserInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraWeaponUserInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWeaponUserInterface, ULyraWeaponUserInterface::StaticClass, TEXT("ULyraWeaponUserInterface"), &Z_Registration_Info_UClass_ULyraWeaponUserInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponUserInterface), 167721804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraWeaponUserInterface_h_2855149020(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraWeaponUserInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraWeaponUserInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
