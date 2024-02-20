// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Common/LyraTabListWidgetBase.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTabListWidgetBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTabListWidgetBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabButtonInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabButtonInterface_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabListWidgetBase();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabListWidgetBase_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraTabDescriptor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraTabDescriptor;
class UScriptStruct* FLyraTabDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraTabDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraTabDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraTabDescriptor, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraTabDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_LyraTabDescriptor.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraTabDescriptor>()
{
	return FLyraTabDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TabText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabButtonType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TabButtonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabContentType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TabContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedTabContentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CreatedTabContentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraTabDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabId_MetaData[] = {
		{ "Category", "LyraTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTabDescriptor, TabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabText_MetaData[] = {
		{ "Category", "LyraTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabText = { "TabText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTabDescriptor, TabText), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_IconBrush_MetaData[] = {
		{ "Category", "LyraTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_IconBrush = { "IconBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTabDescriptor, IconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_IconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_IconBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_bHidden_MetaData[] = {
		{ "Category", "LyraTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((FLyraTabDescriptor*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLyraTabDescriptor), &Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabButtonType_MetaData[] = {
		{ "Category", "LyraTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabButtonType = { "TabButtonType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTabDescriptor, TabButtonType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabButtonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabButtonType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabContentType_MetaData[] = {
		{ "Category", "LyraTabDescriptor" },
		{ "Comment", "//TODO NDarnell - This should become a TSoftClassPtr<>, the underlying common tab list needs to be able to handle lazy tab content construction.\n" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
		{ "ToolTip", "TODO NDarnell - This should become a TSoftClassPtr<>, the underlying common tab list needs to be able to handle lazy tab content construction." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabContentType = { "TabContentType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTabDescriptor, TabContentType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabContentType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_CreatedTabContentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_CreatedTabContentWidget = { "CreatedTabContentWidget", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraTabDescriptor, CreatedTabContentWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_CreatedTabContentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_CreatedTabContentWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_IconBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabButtonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_TabContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewProp_CreatedTabContentWidget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraTabDescriptor",
		sizeof(FLyraTabDescriptor),
		alignof(FLyraTabDescriptor),
		Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraTabDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraTabDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraTabDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraTabDescriptor.InnerSingleton;
	}
	DEFINE_FUNCTION(ILyraTabButtonInterface::execSetTabLabelInfo)
	{
		P_GET_STRUCT_REF(FLyraTabDescriptor,Z_Param_Out_TabDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabLabelInfo_Implementation(Z_Param_Out_TabDescriptor);
		P_NATIVE_END;
	}
	struct LyraTabButtonInterface_eventSetTabLabelInfo_Parms
	{
		FLyraTabDescriptor TabDescriptor;
	};
	void ILyraTabButtonInterface::SetTabLabelInfo(FLyraTabDescriptor const& TabDescriptor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabLabelInfo instead.");
	}
	void ULyraTabButtonInterface::StaticRegisterNativesULyraTabButtonInterface()
	{
		UClass* Class = ULyraTabButtonInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTabLabelInfo", &ILyraTabButtonInterface::execSetTabLabelInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabDescriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabDescriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::NewProp_TabDescriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::NewProp_TabDescriptor = { "TabDescriptor", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabButtonInterface_eventSetTabLabelInfo_Parms, TabDescriptor), Z_Construct_UScriptStruct_FLyraTabDescriptor, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::NewProp_TabDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::NewProp_TabDescriptor_MetaData)) }; // 2680473261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::NewProp_TabDescriptor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab Button" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabButtonInterface, nullptr, "SetTabLabelInfo", nullptr, nullptr, sizeof(LyraTabButtonInterface_eventSetTabLabelInfo_Parms), Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTabButtonInterface);
	UClass* Z_Construct_UClass_ULyraTabButtonInterface_NoRegister()
	{
		return ULyraTabButtonInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTabButtonInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTabButtonInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraTabButtonInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTabButtonInterface_SetTabLabelInfo, "SetTabLabelInfo" }, // 3293177923
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTabButtonInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTabButtonInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILyraTabButtonInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTabButtonInterface_Statics::ClassParams = {
		&ULyraTabButtonInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraTabButtonInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabButtonInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTabButtonInterface()
	{
		if (!Z_Registration_Info_UClass_ULyraTabButtonInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTabButtonInterface.OuterSingleton, Z_Construct_UClass_ULyraTabButtonInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTabButtonInterface.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTabButtonInterface>()
	{
		return ULyraTabButtonInterface::StaticClass();
	}
	ULyraTabButtonInterface::ULyraTabButtonInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTabButtonInterface);
	ULyraTabButtonInterface::~ULyraTabButtonInterface() {}
	static FName NAME_ULyraTabButtonInterface_SetTabLabelInfo = FName(TEXT("SetTabLabelInfo"));
	void ILyraTabButtonInterface::Execute_SetTabLabelInfo(UObject* O, FLyraTabDescriptor const& TabDescriptor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULyraTabButtonInterface::StaticClass()));
		LyraTabButtonInterface_eventSetTabLabelInfo_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULyraTabButtonInterface_SetTabLabelInfo);
		if (Func)
		{
			Parms.TabDescriptor=TabDescriptor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILyraTabButtonInterface*)(O->GetNativeInterfaceAddress(ULyraTabButtonInterface::StaticClass())))
		{
			I->SetTabLabelInfo_Implementation(TabDescriptor);
		}
	}
	struct Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics
	{
		struct LyraTabListWidgetBase_eventOnTabContentCreated_Parms
		{
			FName TabId;
			UCommonUserWidget* TabWidget;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabListWidgetBase_eventOnTabContentCreated_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget = { "TabWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabListWidgetBase_eventOnTabContentCreated_Parms, TabWidget), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate broadcast when a new tab is created. Allows hook ups after creation. */" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
		{ "ToolTip", "Delegate broadcast when a new tab is created. Allows hook ups after creation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabListWidgetBase, nullptr, "OnTabContentCreated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::LyraTabListWidgetBase_eventOnTabContentCreated_Parms), Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void ULyraTabListWidgetBase::FOnTabContentCreated_DelegateWrapper(const FMulticastScriptDelegate& OnTabContentCreated, FName TabId, UCommonUserWidget* TabWidget)
{
	struct LyraTabListWidgetBase_eventOnTabContentCreated_Parms
	{
		FName TabId;
		UCommonUserWidget* TabWidget;
	};
	LyraTabListWidgetBase_eventOnTabContentCreated_Parms Parms;
	Parms.TabId=TabId;
	Parms.TabWidget=TabWidget;
	OnTabContentCreated.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULyraTabListWidgetBase::execGetVisibleTabCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVisibleTabCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTabListWidgetBase::execIsTabVisible)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTabVisible(Z_Param_TabId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTabListWidgetBase::execIsLastTabActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLastTabActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTabListWidgetBase::execIsFirstTabActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFirstTabActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTabListWidgetBase::execRegisterDynamicTab)
	{
		P_GET_STRUCT_REF(FLyraTabDescriptor,Z_Param_Out_TabDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterDynamicTab(Z_Param_Out_TabDescriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTabListWidgetBase::execSetTabHiddenState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameId);
		P_GET_UBOOL(Z_Param_bHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabHiddenState(Z_Param_TabNameId,Z_Param_bHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraTabListWidgetBase::execGetPreregisteredTabInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameId);
		P_GET_STRUCT_REF(FLyraTabDescriptor,Z_Param_Out_OutTabInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPreregisteredTabInfo(Z_Param_TabNameId,Z_Param_Out_OutTabInfo);
		P_NATIVE_END;
	}
	void ULyraTabListWidgetBase::StaticRegisterNativesULyraTabListWidgetBase()
	{
		UClass* Class = ULyraTabListWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPreregisteredTabInfo", &ULyraTabListWidgetBase::execGetPreregisteredTabInfo },
			{ "GetVisibleTabCount", &ULyraTabListWidgetBase::execGetVisibleTabCount },
			{ "IsFirstTabActive", &ULyraTabListWidgetBase::execIsFirstTabActive },
			{ "IsLastTabActive", &ULyraTabListWidgetBase::execIsLastTabActive },
			{ "IsTabVisible", &ULyraTabListWidgetBase::execIsTabVisible },
			{ "RegisterDynamicTab", &ULyraTabListWidgetBase::execRegisterDynamicTab },
			{ "SetTabHiddenState", &ULyraTabListWidgetBase::execSetTabHiddenState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics
	{
		struct LyraTabListWidgetBase_eventGetPreregisteredTabInfo_Parms
		{
			FName TabNameId;
			FLyraTabDescriptor OutTabInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabNameId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTabInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId = { "TabNameId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabListWidgetBase_eventGetPreregisteredTabInfo_Parms, TabNameId), METADATA_PARAMS(Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_OutTabInfo = { "OutTabInfo", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabListWidgetBase_eventGetPreregisteredTabInfo_Parms, OutTabInfo), Z_Construct_UScriptStruct_FLyraTabDescriptor, METADATA_PARAMS(nullptr, 0) }; // 2680473261
	void Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraTabListWidgetBase_eventGetPreregisteredTabInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTabListWidgetBase_eventGetPreregisteredTabInfo_Parms), &Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_OutTabInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabListWidgetBase, nullptr, "GetPreregisteredTabInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::LyraTabListWidgetBase_eventGetPreregisteredTabInfo_Parms), Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics
	{
		struct LyraTabListWidgetBase_eventGetVisibleTabCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabListWidgetBase_eventGetVisibleTabCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabListWidgetBase, nullptr, "GetVisibleTabCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::LyraTabListWidgetBase_eventGetVisibleTabCount_Parms), Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics
	{
		struct LyraTabListWidgetBase_eventIsFirstTabActive_Parms
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
	void Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraTabListWidgetBase_eventIsFirstTabActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTabListWidgetBase_eventIsFirstTabActive_Parms), &Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabListWidgetBase, nullptr, "IsFirstTabActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::LyraTabListWidgetBase_eventIsFirstTabActive_Parms), Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics
	{
		struct LyraTabListWidgetBase_eventIsLastTabActive_Parms
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
	void Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraTabListWidgetBase_eventIsLastTabActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTabListWidgetBase_eventIsLastTabActive_Parms), &Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabListWidgetBase, nullptr, "IsLastTabActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::LyraTabListWidgetBase_eventIsLastTabActive_Parms), Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics
	{
		struct LyraTabListWidgetBase_eventIsTabVisible_Parms
		{
			FName TabId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabListWidgetBase_eventIsTabVisible_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraTabListWidgetBase_eventIsTabVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTabListWidgetBase_eventIsTabVisible_Parms), &Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::NewProp_TabId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabListWidgetBase, nullptr, "IsTabVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::LyraTabListWidgetBase_eventIsTabVisible_Parms), Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics
	{
		struct LyraTabListWidgetBase_eventRegisterDynamicTab_Parms
		{
			FLyraTabDescriptor TabDescriptor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabDescriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabDescriptor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor = { "TabDescriptor", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabListWidgetBase_eventRegisterDynamicTab_Parms, TabDescriptor), Z_Construct_UScriptStruct_FLyraTabDescriptor, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor_MetaData)) }; // 2680473261
	void Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraTabListWidgetBase_eventRegisterDynamicTab_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTabListWidgetBase_eventRegisterDynamicTab_Parms), &Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabListWidgetBase, nullptr, "RegisterDynamicTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::LyraTabListWidgetBase_eventRegisterDynamicTab_Parms), Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics
	{
		struct LyraTabListWidgetBase_eventSetTabHiddenState_Parms
		{
			FName TabNameId;
			bool bHidden;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameId;
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::NewProp_TabNameId = { "TabNameId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraTabListWidgetBase_eventSetTabHiddenState_Parms, TabNameId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((LyraTabListWidgetBase_eventSetTabHiddenState_Parms*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraTabListWidgetBase_eventSetTabHiddenState_Parms), &Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::NewProp_TabNameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::NewProp_bHidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "Comment", "// Toggles whether or not a specified tab is hidden, can only be called before the switcher is associated\n" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
		{ "ToolTip", "Toggles whether or not a specified tab is hidden, can only be called before the switcher is associated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabListWidgetBase, nullptr, "SetTabHiddenState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::LyraTabListWidgetBase_eventSetTabHiddenState_Parms), Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTabListWidgetBase);
	UClass* Z_Construct_UClass_ULyraTabListWidgetBase_NoRegister()
	{
		return ULyraTabListWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTabListWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTabContentCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTabContentCreated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreregisteredTabInfoArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreregisteredTabInfoArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreregisteredTabInfoArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingTabLabelInfoMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PendingTabLabelInfoMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingTabLabelInfoMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PendingTabLabelInfoMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTabListWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonTabListWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraTabListWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTabListWidgetBase_GetPreregisteredTabInfo, "GetPreregisteredTabInfo" }, // 1594783663
		{ &Z_Construct_UFunction_ULyraTabListWidgetBase_GetVisibleTabCount, "GetVisibleTabCount" }, // 2576981861
		{ &Z_Construct_UFunction_ULyraTabListWidgetBase_IsFirstTabActive, "IsFirstTabActive" }, // 1937393730
		{ &Z_Construct_UFunction_ULyraTabListWidgetBase_IsLastTabActive, "IsLastTabActive" }, // 2127805223
		{ &Z_Construct_UFunction_ULyraTabListWidgetBase_IsTabVisible, "IsTabVisible" }, // 1683269177
		{ &Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature, "OnTabContentCreated__DelegateSignature" }, // 1710873761
		{ &Z_Construct_UFunction_ULyraTabListWidgetBase_RegisterDynamicTab, "RegisterDynamicTab" }, // 1064633780
		{ &Z_Construct_UFunction_ULyraTabListWidgetBase_SetTabHiddenState, "SetTabHiddenState" }, // 3463688088
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTabListWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/Common/LyraTabListWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_OnTabContentCreated_MetaData[] = {
		{ "Category", "Tab List" },
		{ "Comment", "/** Broadcasts when a new tab is created. */" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
		{ "ToolTip", "Broadcasts when a new tab is created." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_OnTabContentCreated = { "OnTabContentCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTabListWidgetBase, OnTabContentCreated), Z_Construct_UDelegateFunction_ULyraTabListWidgetBase_OnTabContentCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_OnTabContentCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_OnTabContentCreated_MetaData)) }; // 1710873761
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_Inner = { "PreregisteredTabInfoArray", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraTabDescriptor, METADATA_PARAMS(nullptr, 0) }; // 2680473261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_MetaData[] = {
		{ "Category", "LyraTabListWidgetBase" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
		{ "TitleProperty", "TabId" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray = { "PreregisteredTabInfoArray", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTabListWidgetBase, PreregisteredTabInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_MetaData)) }; // 2680473261
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PendingTabLabelInfoMap_ValueProp = { "PendingTabLabelInfoMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLyraTabDescriptor, METADATA_PARAMS(nullptr, 0) }; // 2680473261
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PendingTabLabelInfoMap_Key_KeyProp = { "PendingTabLabelInfoMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PendingTabLabelInfoMap_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores label info for tabs that have been registered at runtime but not yet created. \n\x09 * Elements are removed once they are created.\n\x09 */" },
		{ "ModuleRelativePath", "UI/Common/LyraTabListWidgetBase.h" },
		{ "ToolTip", "Stores label info for tabs that have been registered at runtime but not yet created.\nElements are removed once they are created." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PendingTabLabelInfoMap = { "PendingTabLabelInfoMap", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTabListWidgetBase, PendingTabLabelInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PendingTabLabelInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PendingTabLabelInfoMap_MetaData)) }; // 2680473261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTabListWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_OnTabContentCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PendingTabLabelInfoMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PendingTabLabelInfoMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTabListWidgetBase_Statics::NewProp_PendingTabLabelInfoMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTabListWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTabListWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTabListWidgetBase_Statics::ClassParams = {
		&ULyraTabListWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraTabListWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabListWidgetBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraTabListWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabListWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTabListWidgetBase()
	{
		if (!Z_Registration_Info_UClass_ULyraTabListWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTabListWidgetBase.OuterSingleton, Z_Construct_UClass_ULyraTabListWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTabListWidgetBase.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTabListWidgetBase>()
	{
		return ULyraTabListWidgetBase::StaticClass();
	}
	ULyraTabListWidgetBase::ULyraTabListWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTabListWidgetBase);
	ULyraTabListWidgetBase::~ULyraTabListWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_Statics::ScriptStructInfo[] = {
		{ FLyraTabDescriptor::StaticStruct, Z_Construct_UScriptStruct_FLyraTabDescriptor_Statics::NewStructOps, TEXT("LyraTabDescriptor"), &Z_Registration_Info_UScriptStruct_LyraTabDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraTabDescriptor), 2680473261U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTabButtonInterface, ULyraTabButtonInterface::StaticClass, TEXT("ULyraTabButtonInterface"), &Z_Registration_Info_UClass_ULyraTabButtonInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTabButtonInterface), 1228131420U) },
		{ Z_Construct_UClass_ULyraTabListWidgetBase, ULyraTabListWidgetBase::StaticClass, TEXT("ULyraTabListWidgetBase"), &Z_Registration_Info_UClass_ULyraTabListWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTabListWidgetBase), 516942331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_777797872(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabListWidgetBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
