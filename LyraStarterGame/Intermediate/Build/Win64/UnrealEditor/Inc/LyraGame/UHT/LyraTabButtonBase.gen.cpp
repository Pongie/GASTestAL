// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Common/LyraTabButtonBase.h"
#include "UI/Common/LyraTabListWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTabButtonBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraButtonBase();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabButtonBase();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabButtonBase_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabButtonInterface_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraTabDescriptor();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraTabButtonBase::execSetTabLabelInfo_Implementation)
	{
		P_GET_STRUCT_REF(FLyraTabDescriptor,Z_Param_Out_TabLabelInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabLabelInfo_Implementation(Z_Param_Out_TabLabelInfo);
		P_NATIVE_END;
	}
	void ULyraTabButtonBase::StaticRegisterNativesULyraTabButtonBase()
	{
		UClass* Class = ULyraTabButtonBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTabLabelInfo_Implementation", &ULyraTabButtonBase::execSetTabLabelInfo_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics
	{
		struct LyraTabButtonBase_eventSetTabLabelInfo_Implementation_Parms
		{
			FLyraTabDescriptor TabLabelInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabLabelInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabLabelInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::NewProp_TabLabelInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::NewProp_TabLabelInfo = { "TabLabelInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabButtonBase_eventSetTabLabelInfo_Implementation_Parms, TabLabelInfo), Z_Construct_UScriptStruct_FLyraTabDescriptor, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::NewProp_TabLabelInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::NewProp_TabLabelInfo_MetaData)) }; // 2680473261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::NewProp_TabLabelInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Common/LyraTabButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabButtonBase, nullptr, "SetTabLabelInfo_Implementation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::LyraTabButtonBase_eventSetTabLabelInfo_Implementation_Parms), Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTabButtonBase);
	UClass* Z_Construct_UClass_ULyraTabButtonBase_NoRegister()
	{
		return ULyraTabButtonBase::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTabButtonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyImage_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LazyImage_Icon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTabButtonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraButtonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraTabButtonBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation, "SetTabLabelInfo_Implementation" }, // 2412549863
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTabButtonBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/Common/LyraTabButtonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraTabButtonBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTabButtonBase_Statics::NewProp_LazyImage_Icon_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraTabButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraTabButtonBase_Statics::NewProp_LazyImage_Icon = { "LazyImage_Icon", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTabButtonBase, LazyImage_Icon), Z_Construct_UClass_UCommonLazyImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraTabButtonBase_Statics::NewProp_LazyImage_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabButtonBase_Statics::NewProp_LazyImage_Icon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTabButtonBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTabButtonBase_Statics::NewProp_LazyImage_Icon,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraTabButtonBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULyraTabButtonInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraTabButtonBase, ILyraTabButtonInterface), false },  // 1228131420
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTabButtonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTabButtonBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTabButtonBase_Statics::ClassParams = {
		&ULyraTabButtonBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraTabButtonBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabButtonBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraTabButtonBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabButtonBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTabButtonBase()
	{
		if (!Z_Registration_Info_UClass_ULyraTabButtonBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTabButtonBase.OuterSingleton, Z_Construct_UClass_ULyraTabButtonBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTabButtonBase.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTabButtonBase>()
	{
		return ULyraTabButtonBase::StaticClass();
	}
	ULyraTabButtonBase::ULyraTabButtonBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTabButtonBase);
	ULyraTabButtonBase::~ULyraTabButtonBase() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTabButtonBase, ULyraTabButtonBase::StaticClass, TEXT("ULyraTabButtonBase"), &Z_Registration_Info_UClass_ULyraTabButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTabButtonBase), 2136556147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_554140203(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
