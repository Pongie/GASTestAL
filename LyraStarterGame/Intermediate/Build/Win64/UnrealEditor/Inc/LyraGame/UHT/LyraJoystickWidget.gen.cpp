// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/LyraJoystickWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraJoystickWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraJoystickWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraJoystickWidget_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSimulatedInputWidget();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraJoystickWidget::StaticRegisterNativesULyraJoystickWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraJoystickWidget);
	UClass* Z_Construct_UClass_ULyraJoystickWidget_NoRegister()
	{
		return ULyraJoystickWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULyraJoystickWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StickRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StickRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoystickBackground_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JoystickBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoystickForeground_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JoystickForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNegateYAxis_MetaData[];
#endif
		static void NewProp_bNegateYAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNegateYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TouchOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StickVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StickVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraJoystickWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraSimulatedInputWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraJoystickWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  A UMG wrapper for the lyra virtual joystick.\n *\n *  This will calculate a 2D vector clamped between -1 and 1\n *  to input as a key value to the player, simulating a gamepad analog stick.\n *\n *  This is intended for use with and Enhanced Input player.\n */" },
		{ "DisplayName", "Lyra Joystick" },
		{ "IncludePath", "UI/LyraJoystickWidget.h" },
		{ "ModuleRelativePath", "UI/LyraJoystickWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A UMG wrapper for the lyra virtual joystick.\n\nThis will calculate a 2D vector clamped between -1 and 1\nto input as a key value to the player, simulating a gamepad analog stick.\n\nThis is intended for use with and Enhanced Input player." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickRange_MetaData[] = {
		{ "Category", "LyraJoystickWidget" },
		{ "Comment", "/** How far can the inner image of the joystick be moved? */" },
		{ "ModuleRelativePath", "UI/LyraJoystickWidget.h" },
		{ "ToolTip", "How far can the inner image of the joystick be moved?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickRange = { "StickRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraJoystickWidget, StickRange), METADATA_PARAMS(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickBackground_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LyraJoystickWidget" },
		{ "Comment", "/** Image to be used as the background of the joystick */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/LyraJoystickWidget.h" },
		{ "ToolTip", "Image to be used as the background of the joystick" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickBackground = { "JoystickBackground", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraJoystickWidget, JoystickBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickForeground_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LyraJoystickWidget" },
		{ "Comment", "/** Image to be used as the foreground of the joystick */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/LyraJoystickWidget.h" },
		{ "ToolTip", "Image to be used as the foreground of the joystick" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickForeground = { "JoystickForeground", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraJoystickWidget, JoystickForeground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickForeground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_bNegateYAxis_MetaData[] = {
		{ "Category", "LyraJoystickWidget" },
		{ "Comment", "/** Should we negate the Y-axis value of the joystick? This is common for \"movement\" sticks */" },
		{ "ModuleRelativePath", "UI/LyraJoystickWidget.h" },
		{ "ToolTip", "Should we negate the Y-axis value of the joystick? This is common for \"movement\" sticks" },
	};
#endif
	void Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_bNegateYAxis_SetBit(void* Obj)
	{
		((ULyraJoystickWidget*)Obj)->bNegateYAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_bNegateYAxis = { "bNegateYAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraJoystickWidget), &Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_bNegateYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_bNegateYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_bNegateYAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_TouchOrigin_MetaData[] = {
		{ "Comment", "/** The origin of the touch. Set on NativeOnTouchStarted */" },
		{ "ModuleRelativePath", "UI/LyraJoystickWidget.h" },
		{ "ToolTip", "The origin of the touch. Set on NativeOnTouchStarted" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_TouchOrigin = { "TouchOrigin", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraJoystickWidget, TouchOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_TouchOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_TouchOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickVector_MetaData[] = {
		{ "ModuleRelativePath", "UI/LyraJoystickWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickVector = { "StickVector", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraJoystickWidget, StickVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickVector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraJoystickWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_JoystickForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_bNegateYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_TouchOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraJoystickWidget_Statics::NewProp_StickVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraJoystickWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraJoystickWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraJoystickWidget_Statics::ClassParams = {
		&ULyraJoystickWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraJoystickWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraJoystickWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraJoystickWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraJoystickWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraJoystickWidget()
	{
		if (!Z_Registration_Info_UClass_ULyraJoystickWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraJoystickWidget.OuterSingleton, Z_Construct_UClass_ULyraJoystickWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraJoystickWidget.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraJoystickWidget>()
	{
		return ULyraJoystickWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraJoystickWidget);
	ULyraJoystickWidget::~ULyraJoystickWidget() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraJoystickWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraJoystickWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraJoystickWidget, ULyraJoystickWidget::StaticClass, TEXT("ULyraJoystickWidget"), &Z_Registration_Info_UClass_ULyraJoystickWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraJoystickWidget), 3770263963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraJoystickWidget_h_1884418706(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraJoystickWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraJoystickWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
