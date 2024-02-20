// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Foundation/LyraConfirmationScreen.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "Components/SlateWrapperTypes.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraConfirmationScreen() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialog();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraConfirmationScreen();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraConfirmationScreen_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraConfirmationScreen::execHandleTapToCloseZoneMouseButtonDown)
	{
		P_GET_STRUCT(FGeometry,Z_Param_MyGeometry);
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_MouseEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventReply*)Z_Param__Result=P_THIS->HandleTapToCloseZoneMouseButtonDown(Z_Param_MyGeometry,Z_Param_Out_MouseEvent);
		P_NATIVE_END;
	}
	void ULyraConfirmationScreen::StaticRegisterNativesULyraConfirmationScreen()
	{
		UClass* Class = ULyraConfirmationScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTapToCloseZoneMouseButtonDown", &ULyraConfirmationScreen::execHandleTapToCloseZoneMouseButtonDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics
	{
		struct LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms
		{
			FGeometry MyGeometry;
			FPointerEvent MouseEvent;
			FEventReply ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraConfirmationScreen, nullptr, "HandleTapToCloseZoneMouseButtonDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms), Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraConfirmationScreen);
	UClass* Z_Construct_UClass_ULyraConfirmationScreen_NoRegister()
	{
		return ULyraConfirmationScreen::StaticClass();
	}
	struct Z_Construct_UClass_ULyraConfirmationScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_Title_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Text_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichText_Description_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RichText_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryBox_Buttons_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntryBox_Buttons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Border_TapToCloseZone_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Border_TapToCloseZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CancelAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraConfirmationScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonGameDialog,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraConfirmationScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown, "HandleTapToCloseZoneMouseButtonDown" }, // 2629339259
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraConfirmationScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09\n */" },
		{ "IncludePath", "UI/Foundation/LyraConfirmationScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Text_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Text_Title = { "Text_Title", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraConfirmationScreen, Text_Title), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Text_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Text_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_RichText_Description_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_RichText_Description = { "RichText_Description", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraConfirmationScreen, RichText_Description), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_RichText_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_RichText_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_EntryBox_Buttons_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_EntryBox_Buttons = { "EntryBox_Buttons", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraConfirmationScreen, EntryBox_Buttons), Z_Construct_UClass_UDynamicEntryBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_EntryBox_Buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_EntryBox_Buttons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Border_TapToCloseZone_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Border_TapToCloseZone = { "Border_TapToCloseZone", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraConfirmationScreen, Border_TapToCloseZone), Z_Construct_UClass_UCommonBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Border_TapToCloseZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Border_TapToCloseZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_CancelAction_MetaData[] = {
		{ "Category", "LyraConfirmationScreen" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_CancelAction = { "CancelAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraConfirmationScreen, CancelAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_CancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_CancelAction_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraConfirmationScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Text_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_RichText_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_EntryBox_Buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Border_TapToCloseZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_CancelAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraConfirmationScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraConfirmationScreen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::ClassParams = {
		&ULyraConfirmationScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraConfirmationScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraConfirmationScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraConfirmationScreen()
	{
		if (!Z_Registration_Info_UClass_ULyraConfirmationScreen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraConfirmationScreen.OuterSingleton, Z_Construct_UClass_ULyraConfirmationScreen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraConfirmationScreen.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraConfirmationScreen>()
	{
		return ULyraConfirmationScreen::StaticClass();
	}
	ULyraConfirmationScreen::ULyraConfirmationScreen() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraConfirmationScreen);
	ULyraConfirmationScreen::~ULyraConfirmationScreen() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraConfirmationScreen, ULyraConfirmationScreen::StaticClass, TEXT("ULyraConfirmationScreen"), &Z_Registration_Info_UClass_ULyraConfirmationScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraConfirmationScreen), 1107670915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_903832431(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
