// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/LyraTouchRegion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTouchRegion() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSimulatedInputWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTouchRegion();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTouchRegion_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraTouchRegion::execShouldSimulateInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldSimulateInput();
		P_NATIVE_END;
	}
	void ULyraTouchRegion::StaticRegisterNativesULyraTouchRegion()
	{
		UClass* Class = ULyraTouchRegion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShouldSimulateInput", &ULyraTouchRegion::execShouldSimulateInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics
	{
		struct LyraTouchRegion_eventShouldSimulateInput_Parms
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
	void Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraTouchRegion_eventShouldSimulateInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTouchRegion_eventShouldSimulateInput_Parms), &Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//~ End UUserWidget interface\n" },
		{ "ModuleRelativePath", "UI/LyraTouchRegion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTouchRegion, nullptr, "ShouldSimulateInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::LyraTouchRegion_eventShouldSimulateInput_Parms), Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTouchRegion);
	UClass* Z_Construct_UClass_ULyraTouchRegion_NoRegister()
	{
		return ULyraTouchRegion::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTouchRegion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTouchRegion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraSimulatedInputWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraTouchRegion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput, "ShouldSimulateInput" }, // 936393210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTouchRegion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A \"Touch Region\" is used to define an area on the screen that should trigger some\n * input when the user presses a finger on it\n */" },
		{ "DisplayName", "Lyra Touch Region" },
		{ "IncludePath", "UI/LyraTouchRegion.h" },
		{ "ModuleRelativePath", "UI/LyraTouchRegion.h" },
		{ "ToolTip", "A \"Touch Region\" is used to define an area on the screen that should trigger some\ninput when the user presses a finger on it" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTouchRegion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTouchRegion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTouchRegion_Statics::ClassParams = {
		&ULyraTouchRegion::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraTouchRegion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTouchRegion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTouchRegion()
	{
		if (!Z_Registration_Info_UClass_ULyraTouchRegion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTouchRegion.OuterSingleton, Z_Construct_UClass_ULyraTouchRegion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTouchRegion.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTouchRegion>()
	{
		return ULyraTouchRegion::StaticClass();
	}
	ULyraTouchRegion::ULyraTouchRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTouchRegion);
	ULyraTouchRegion::~ULyraTouchRegion() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTouchRegion, ULyraTouchRegion::StaticClass, TEXT("ULyraTouchRegion"), &Z_Registration_Info_UClass_ULyraTouchRegion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTouchRegion), 2468867215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_2928684797(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
