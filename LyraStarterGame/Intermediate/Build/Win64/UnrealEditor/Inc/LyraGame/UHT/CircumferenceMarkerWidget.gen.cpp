// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Weapons/CircumferenceMarkerWidget.h"
#include "Styling/SlateBrush.h"
#include "UI/Weapons/SCircumferenceMarkerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircumferenceMarkerWidget() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_UCircumferenceMarkerWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_UCircumferenceMarkerWidget_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCircumferenceMarkerEntry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(UCircumferenceMarkerWidget::execSetRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius(Z_Param_InRadius);
		P_NATIVE_END;
	}
	void UCircumferenceMarkerWidget::StaticRegisterNativesUCircumferenceMarkerWidget()
	{
		UClass* Class = UCircumferenceMarkerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRadius", &UCircumferenceMarkerWidget::execSetRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics
	{
		struct CircumferenceMarkerWidget_eventSetRadius_Parms
		{
			float InRadius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CircumferenceMarkerWidget_eventSetRadius_Parms, InRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::NewProp_InRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the radius of the circle. */" },
		{ "ModuleRelativePath", "UI/Weapons/CircumferenceMarkerWidget.h" },
		{ "ToolTip", "Sets the radius of the circle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircumferenceMarkerWidget, nullptr, "SetRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::CircumferenceMarkerWidget_eventSetRadius_Parms), Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCircumferenceMarkerWidget);
	UClass* Z_Construct_UClass_UCircumferenceMarkerWidget_NoRegister()
	{
		return UCircumferenceMarkerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCircumferenceMarkerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReticleCornerOutsideSpreadRadius_MetaData[];
#endif
		static void NewProp_bReticleCornerOutsideSpreadRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReticleCornerOutsideSpreadRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCircumferenceMarkerWidget_SetRadius, "SetRadius" }, // 4180998208
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Weapons/CircumferenceMarkerWidget.h" },
		{ "ModuleRelativePath", "UI/Weapons/CircumferenceMarkerWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList_Inner = { "MarkerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCircumferenceMarkerEntry, METADATA_PARAMS(nullptr, 0) }; // 2704765841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The list of positions/orientations to draw the markers at. */" },
		{ "ModuleRelativePath", "UI/Weapons/CircumferenceMarkerWidget.h" },
		{ "ToolTip", "The list of positions/orientations to draw the markers at." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList = { "MarkerList", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCircumferenceMarkerWidget, MarkerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList_MetaData)) }; // 2704765841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The radius of the circle. */" },
		{ "ModuleRelativePath", "UI/Weapons/CircumferenceMarkerWidget.h" },
		{ "ToolTip", "The radius of the circle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCircumferenceMarkerWidget, Radius), METADATA_PARAMS(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The marker image to place around the circle. */" },
		{ "ModuleRelativePath", "UI/Weapons/CircumferenceMarkerWidget.h" },
		{ "ToolTip", "The marker image to place around the circle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerImage = { "MarkerImage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCircumferenceMarkerWidget, MarkerImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsideSpreadRadius_MetaData[] = {
		{ "Category", "Corner" },
		{ "Comment", "/** Whether reticle corner images are placed outside the spread radius *///@TODO: Make this a 0-1 float alignment instead (e.g., inside/on/outside the radius)?\n" },
		{ "ModuleRelativePath", "UI/Weapons/CircumferenceMarkerWidget.h" },
		{ "ToolTip", "Whether reticle corner images are placed outside the spread radius //@TODO: Make this a 0-1 float alignment instead (e.g., inside/on/outside the radius)?" },
	};
#endif
	void Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsideSpreadRadius_SetBit(void* Obj)
	{
		((UCircumferenceMarkerWidget*)Obj)->bReticleCornerOutsideSpreadRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsideSpreadRadius = { "bReticleCornerOutsideSpreadRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCircumferenceMarkerWidget), &Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsideSpreadRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsideSpreadRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsideSpreadRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsideSpreadRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCircumferenceMarkerWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::ClassParams = {
		&UCircumferenceMarkerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCircumferenceMarkerWidget()
	{
		if (!Z_Registration_Info_UClass_UCircumferenceMarkerWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCircumferenceMarkerWidget.OuterSingleton, Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCircumferenceMarkerWidget.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UCircumferenceMarkerWidget>()
	{
		return UCircumferenceMarkerWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCircumferenceMarkerWidget);
	UCircumferenceMarkerWidget::~UCircumferenceMarkerWidget() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_CircumferenceMarkerWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_CircumferenceMarkerWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCircumferenceMarkerWidget, UCircumferenceMarkerWidget::StaticClass, TEXT("UCircumferenceMarkerWidget"), &Z_Registration_Info_UClass_UCircumferenceMarkerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCircumferenceMarkerWidget), 993881940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_CircumferenceMarkerWidget_h_1194255980(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_CircumferenceMarkerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_CircumferenceMarkerWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
