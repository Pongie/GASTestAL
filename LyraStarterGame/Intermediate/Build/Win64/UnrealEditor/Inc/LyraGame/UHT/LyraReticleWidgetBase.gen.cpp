// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Weapons/LyraReticleWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReticleWidgetBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReticleWidgetBase();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReticleWidgetBase_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraReticleWidgetBase::execHasFirstShotAccuracy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFirstShotAccuracy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReticleWidgetBase::execComputeMaxScreenspaceSpreadRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ComputeMaxScreenspaceSpreadRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReticleWidgetBase::execComputeSpreadAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ComputeSpreadAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReticleWidgetBase::execInitializeFromWeapon)
	{
		P_GET_OBJECT(ULyraWeaponInstance,Z_Param_InWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeFromWeapon(Z_Param_InWeapon);
		P_NATIVE_END;
	}
	static FName NAME_ULyraReticleWidgetBase_OnWeaponInitialized = FName(TEXT("OnWeaponInitialized"));
	void ULyraReticleWidgetBase::OnWeaponInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULyraReticleWidgetBase_OnWeaponInitialized),NULL);
	}
	void ULyraReticleWidgetBase::StaticRegisterNativesULyraReticleWidgetBase()
	{
		UClass* Class = ULyraReticleWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeMaxScreenspaceSpreadRadius", &ULyraReticleWidgetBase::execComputeMaxScreenspaceSpreadRadius },
			{ "ComputeSpreadAngle", &ULyraReticleWidgetBase::execComputeSpreadAngle },
			{ "HasFirstShotAccuracy", &ULyraReticleWidgetBase::execHasFirstShotAccuracy },
			{ "InitializeFromWeapon", &ULyraReticleWidgetBase::execInitializeFromWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics
	{
		struct LyraReticleWidgetBase_eventComputeMaxScreenspaceSpreadRadius_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReticleWidgetBase_eventComputeMaxScreenspaceSpreadRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the current weapon's maximum spread radius in screenspace units (pixels) */" },
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
		{ "ToolTip", "Returns the current weapon's maximum spread radius in screenspace units (pixels)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "ComputeMaxScreenspaceSpreadRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::LyraReticleWidgetBase_eventComputeMaxScreenspaceSpreadRadius_Parms), Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics
	{
		struct LyraReticleWidgetBase_eventComputeSpreadAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReticleWidgetBase_eventComputeSpreadAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the current weapon's diametrical spread angle, in degrees */" },
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
		{ "ToolTip", "Returns the current weapon's diametrical spread angle, in degrees" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "ComputeSpreadAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::LyraReticleWidgetBase_eventComputeSpreadAngle_Parms), Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics
	{
		struct LyraReticleWidgetBase_eventHasFirstShotAccuracy_Parms
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
	void Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraReticleWidgetBase_eventHasFirstShotAccuracy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraReticleWidgetBase_eventHasFirstShotAccuracy_Parms), &Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Returns true if the current weapon is at 'first shot accuracy'\n\x09 * (the weapon allows it and it is at min spread)\n\x09 */" },
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
		{ "ToolTip", "Returns true if the current weapon is at 'first shot accuracy'\n(the weapon allows it and it is at min spread)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "HasFirstShotAccuracy", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::LyraReticleWidgetBase_eventHasFirstShotAccuracy_Parms), Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics
	{
		struct LyraReticleWidgetBase_eventInitializeFromWeapon_Parms
		{
			ULyraWeaponInstance* InWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::NewProp_InWeapon = { "InWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReticleWidgetBase_eventInitializeFromWeapon_Parms, InWeapon), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::NewProp_InWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "InitializeFromWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::LyraReticleWidgetBase_eventInitializeFromWeapon_Parms), Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "OnWeaponInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReticleWidgetBase);
	UClass* Z_Construct_UClass_ULyraReticleWidgetBase_NoRegister()
	{
		return ULyraReticleWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_ULyraReticleWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeaponInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraReticleWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraReticleWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius, "ComputeMaxScreenspaceSpreadRadius" }, // 1356408880
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle, "ComputeSpreadAngle" }, // 2092695723
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy, "HasFirstShotAccuracy" }, // 1011485457
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon, "InitializeFromWeapon" }, // 3237429096
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized, "OnWeaponInitialized" }, // 1743421707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReticleWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Weapons/LyraReticleWidgetBase.h" },
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_WeaponInstance_MetaData[] = {
		{ "Category", "LyraReticleWidgetBase" },
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_WeaponInstance = { "WeaponInstance", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReticleWidgetBase, WeaponInstance), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_WeaponInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_WeaponInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_InventoryInstance_MetaData[] = {
		{ "Category", "LyraReticleWidgetBase" },
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_InventoryInstance = { "InventoryInstance", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReticleWidgetBase, InventoryInstance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_InventoryInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_InventoryInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraReticleWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_WeaponInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_InventoryInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraReticleWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReticleWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReticleWidgetBase_Statics::ClassParams = {
		&ULyraReticleWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraReticleWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraReticleWidgetBase()
	{
		if (!Z_Registration_Info_UClass_ULyraReticleWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReticleWidgetBase.OuterSingleton, Z_Construct_UClass_ULyraReticleWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraReticleWidgetBase.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraReticleWidgetBase>()
	{
		return ULyraReticleWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReticleWidgetBase);
	ULyraReticleWidgetBase::~ULyraReticleWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraReticleWidgetBase, ULyraReticleWidgetBase::StaticClass, TEXT("ULyraReticleWidgetBase"), &Z_Registration_Info_UClass_ULyraReticleWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReticleWidgetBase), 290468164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_732176973(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
