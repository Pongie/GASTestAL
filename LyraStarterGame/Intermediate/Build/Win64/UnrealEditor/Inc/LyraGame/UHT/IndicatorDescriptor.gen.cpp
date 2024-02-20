// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/IndicatorSystem/IndicatorDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndicatorDescriptor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorDescriptor();
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorDescriptor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorCanvasProjectionMode;
	static UEnum* EActorCanvasProjectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActorCanvasProjectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActorCanvasProjectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EActorCanvasProjectionMode"));
		}
		return Z_Registration_Info_UEnum_EActorCanvasProjectionMode.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<EActorCanvasProjectionMode>()
	{
		return EActorCanvasProjectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enumerators[] = {
		{ "EActorCanvasProjectionMode::ComponentPoint", (int64)EActorCanvasProjectionMode::ComponentPoint },
		{ "EActorCanvasProjectionMode::ComponentBoundingBox", (int64)EActorCanvasProjectionMode::ComponentBoundingBox },
		{ "EActorCanvasProjectionMode::ComponentScreenBoundingBox", (int64)EActorCanvasProjectionMode::ComponentScreenBoundingBox },
		{ "EActorCanvasProjectionMode::ActorBoundingBox", (int64)EActorCanvasProjectionMode::ActorBoundingBox },
		{ "EActorCanvasProjectionMode::ActorScreenBoundingBox", (int64)EActorCanvasProjectionMode::ActorScreenBoundingBox },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enum_MetaDataParams[] = {
		{ "ActorBoundingBox.Name", "EActorCanvasProjectionMode::ActorBoundingBox" },
		{ "ActorScreenBoundingBox.Name", "EActorCanvasProjectionMode::ActorScreenBoundingBox" },
		{ "BlueprintType", "true" },
		{ "ComponentBoundingBox.Name", "EActorCanvasProjectionMode::ComponentBoundingBox" },
		{ "ComponentPoint.Name", "EActorCanvasProjectionMode::ComponentPoint" },
		{ "ComponentScreenBoundingBox.Name", "EActorCanvasProjectionMode::ComponentScreenBoundingBox" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"EActorCanvasProjectionMode",
		"EActorCanvasProjectionMode",
		Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode()
	{
		if (!Z_Registration_Info_UEnum_EActorCanvasProjectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorCanvasProjectionMode.InnerSingleton, Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActorCanvasProjectionMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execUnregisterIndicator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterIndicator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_InPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetBoundingBoxAnchor)
	{
		P_GET_STRUCT(FVector,Z_Param_InBoundingBoxAnchor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoundingBoxAnchor(Z_Param_InBoundingBoxAnchor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetBoundingBoxAnchor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBoundingBoxAnchor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetScreenSpaceOffset)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScreenSpaceOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetScreenSpaceOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetScreenSpaceOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetWorldPositionOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldPositionOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetWorldPositionOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldPositionOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetShowClampToScreenArrow)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowClampToScreenArrow(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetShowClampToScreenArrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShowClampToScreenArrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetClampToScreen)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClampToScreen(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetClampToScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetClampToScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetVAlign)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVAlign(EVerticalAlignment(Z_Param_InVAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetVAlign)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EVerticalAlignment>*)Z_Param__Result=P_THIS->GetVAlign();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetHAlign)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHAlign(EHorizontalAlignment(Z_Param_InHAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetHAlign)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EHorizontalAlignment>*)Z_Param__Result=P_THIS->GetHAlign();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetProjectionMode)
	{
		P_GET_ENUM(EActorCanvasProjectionMode,Z_Param_InProjectionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectionMode(EActorCanvasProjectionMode(Z_Param_InProjectionMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetProjectionMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EActorCanvasProjectionMode*)Z_Param__Result=P_THIS->GetProjectionMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetDesiredVisibility)
	{
		P_GET_UBOOL(Z_Param_InVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredVisibility(Z_Param_InVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetAutoRemoveWhenIndicatorComponentIsNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAutoRemoveWhenIndicatorComponentIsNull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetAutoRemoveWhenIndicatorComponentIsNull)
	{
		P_GET_UBOOL(Z_Param_CanAutomaticallyRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoRemoveWhenIndicatorComponentIsNull(Z_Param_CanAutomaticallyRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetIndicatorClass)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UUserWidget> ,Z_Param_InIndicatorWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndicatorClass(Z_Param_InIndicatorWidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetIndicatorClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftClassPtr<UUserWidget> *)Z_Param__Result=P_THIS->GetIndicatorClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetComponentSocketName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponentSocketName(Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetComponentSocketName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetComponentSocketName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetSceneComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSceneComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetSceneComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetSceneComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execSetDataObject)
	{
		P_GET_OBJECT(UObject,Z_Param_InDataObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataObject(Z_Param_InDataObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIndicatorDescriptor::execGetDataObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetDataObject();
		P_NATIVE_END;
	}
	void UIndicatorDescriptor::StaticRegisterNativesUIndicatorDescriptor()
	{
		UClass* Class = UIndicatorDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAutoRemoveWhenIndicatorComponentIsNull", &UIndicatorDescriptor::execGetAutoRemoveWhenIndicatorComponentIsNull },
			{ "GetBoundingBoxAnchor", &UIndicatorDescriptor::execGetBoundingBoxAnchor },
			{ "GetClampToScreen", &UIndicatorDescriptor::execGetClampToScreen },
			{ "GetComponentSocketName", &UIndicatorDescriptor::execGetComponentSocketName },
			{ "GetDataObject", &UIndicatorDescriptor::execGetDataObject },
			{ "GetHAlign", &UIndicatorDescriptor::execGetHAlign },
			{ "GetIndicatorClass", &UIndicatorDescriptor::execGetIndicatorClass },
			{ "GetIsVisible", &UIndicatorDescriptor::execGetIsVisible },
			{ "GetPriority", &UIndicatorDescriptor::execGetPriority },
			{ "GetProjectionMode", &UIndicatorDescriptor::execGetProjectionMode },
			{ "GetSceneComponent", &UIndicatorDescriptor::execGetSceneComponent },
			{ "GetScreenSpaceOffset", &UIndicatorDescriptor::execGetScreenSpaceOffset },
			{ "GetShowClampToScreenArrow", &UIndicatorDescriptor::execGetShowClampToScreenArrow },
			{ "GetVAlign", &UIndicatorDescriptor::execGetVAlign },
			{ "GetWorldPositionOffset", &UIndicatorDescriptor::execGetWorldPositionOffset },
			{ "SetAutoRemoveWhenIndicatorComponentIsNull", &UIndicatorDescriptor::execSetAutoRemoveWhenIndicatorComponentIsNull },
			{ "SetBoundingBoxAnchor", &UIndicatorDescriptor::execSetBoundingBoxAnchor },
			{ "SetClampToScreen", &UIndicatorDescriptor::execSetClampToScreen },
			{ "SetComponentSocketName", &UIndicatorDescriptor::execSetComponentSocketName },
			{ "SetDataObject", &UIndicatorDescriptor::execSetDataObject },
			{ "SetDesiredVisibility", &UIndicatorDescriptor::execSetDesiredVisibility },
			{ "SetHAlign", &UIndicatorDescriptor::execSetHAlign },
			{ "SetIndicatorClass", &UIndicatorDescriptor::execSetIndicatorClass },
			{ "SetPriority", &UIndicatorDescriptor::execSetPriority },
			{ "SetProjectionMode", &UIndicatorDescriptor::execSetProjectionMode },
			{ "SetSceneComponent", &UIndicatorDescriptor::execSetSceneComponent },
			{ "SetScreenSpaceOffset", &UIndicatorDescriptor::execSetScreenSpaceOffset },
			{ "SetShowClampToScreenArrow", &UIndicatorDescriptor::execSetShowClampToScreenArrow },
			{ "SetVAlign", &UIndicatorDescriptor::execSetVAlign },
			{ "SetWorldPositionOffset", &UIndicatorDescriptor::execSetWorldPositionOffset },
			{ "UnregisterIndicator", &UIndicatorDescriptor::execUnregisterIndicator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics
	{
		struct IndicatorDescriptor_eventGetAutoRemoveWhenIndicatorComponentIsNull_Parms
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
	void Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IndicatorDescriptor_eventGetAutoRemoveWhenIndicatorComponentIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IndicatorDescriptor_eventGetAutoRemoveWhenIndicatorComponentIsNull_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetAutoRemoveWhenIndicatorComponentIsNull", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::IndicatorDescriptor_eventGetAutoRemoveWhenIndicatorComponentIsNull_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics
	{
		struct IndicatorDescriptor_eventGetBoundingBoxAnchor_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetBoundingBoxAnchor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetBoundingBoxAnchor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::IndicatorDescriptor_eventGetBoundingBoxAnchor_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics
	{
		struct IndicatorDescriptor_eventGetClampToScreen_Parms
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
	void Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IndicatorDescriptor_eventGetClampToScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IndicatorDescriptor_eventGetClampToScreen_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Clamp the indicator to the edge of the screen?\n" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ToolTip", "Clamp the indicator to the edge of the screen?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetClampToScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::IndicatorDescriptor_eventGetClampToScreen_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics
	{
		struct IndicatorDescriptor_eventGetComponentSocketName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetComponentSocketName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetComponentSocketName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::IndicatorDescriptor_eventGetComponentSocketName_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics
	{
		struct IndicatorDescriptor_eventGetDataObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetDataObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetDataObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::IndicatorDescriptor_eventGetDataObject_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics
	{
		struct IndicatorDescriptor_eventGetHAlign_Parms
		{
			TEnumAsByte<EHorizontalAlignment> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetHAlign_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Horizontal alignment to the point in space to place the indicator at.\n" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ToolTip", "Horizontal alignment to the point in space to place the indicator at." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetHAlign", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::IndicatorDescriptor_eventGetHAlign_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics
	{
		struct IndicatorDescriptor_eventGetIndicatorClass_Parms
		{
			TSoftClassPtr<UUserWidget>  ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetIndicatorClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetIndicatorClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::IndicatorDescriptor_eventGetIndicatorClass_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics
	{
		struct IndicatorDescriptor_eventGetIsVisible_Parms
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
	void Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IndicatorDescriptor_eventGetIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IndicatorDescriptor_eventGetIsVisible_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Layout Properties\n//=======================\n" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ToolTip", "Layout Properties" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetIsVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::IndicatorDescriptor_eventGetIsVisible_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics
	{
		struct IndicatorDescriptor_eventGetPriority_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Allows sorting the indicators (after they are sorted by depth), to allow some group of indicators\n// to always be in front of others.\n" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ToolTip", "Allows sorting the indicators (after they are sorted by depth), to allow some group of indicators\nto always be in front of others." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::IndicatorDescriptor_eventGetPriority_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics
	{
		struct IndicatorDescriptor_eventGetProjectionMode_Parms
		{
			EActorCanvasProjectionMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetProjectionMode_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode, METADATA_PARAMS(nullptr, 0) }; // 3986140753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetProjectionMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::IndicatorDescriptor_eventGetProjectionMode_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics
	{
		struct IndicatorDescriptor_eventGetSceneComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetSceneComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetSceneComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::IndicatorDescriptor_eventGetSceneComponent_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics
	{
		struct IndicatorDescriptor_eventGetScreenSpaceOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetScreenSpaceOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// The position offset for the indicator in screen space.\n" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ToolTip", "The position offset for the indicator in screen space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetScreenSpaceOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::IndicatorDescriptor_eventGetScreenSpaceOffset_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics
	{
		struct IndicatorDescriptor_eventGetShowClampToScreenArrow_Parms
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
	void Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IndicatorDescriptor_eventGetShowClampToScreenArrow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IndicatorDescriptor_eventGetShowClampToScreenArrow_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Show the arrow if clamping to the edge of the screen?\n" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ToolTip", "Show the arrow if clamping to the edge of the screen?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetShowClampToScreenArrow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::IndicatorDescriptor_eventGetShowClampToScreenArrow_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics
	{
		struct IndicatorDescriptor_eventGetVAlign_Parms
		{
			TEnumAsByte<EVerticalAlignment> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetVAlign_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Vertical alignment to the point in space to place the indicator at.\n" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ToolTip", "Vertical alignment to the point in space to place the indicator at." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetVAlign", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::IndicatorDescriptor_eventGetVAlign_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics
	{
		struct IndicatorDescriptor_eventGetWorldPositionOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventGetWorldPositionOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// The position offset for the indicator in world space.\n" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ToolTip", "The position offset for the indicator in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetWorldPositionOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::IndicatorDescriptor_eventGetWorldPositionOffset_Parms), Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics
	{
		struct IndicatorDescriptor_eventSetAutoRemoveWhenIndicatorComponentIsNull_Parms
		{
			bool CanAutomaticallyRemove;
		};
		static void NewProp_CanAutomaticallyRemove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanAutomaticallyRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_CanAutomaticallyRemove_SetBit(void* Obj)
	{
		((IndicatorDescriptor_eventSetAutoRemoveWhenIndicatorComponentIsNull_Parms*)Obj)->CanAutomaticallyRemove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_CanAutomaticallyRemove = { "CanAutomaticallyRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IndicatorDescriptor_eventSetAutoRemoveWhenIndicatorComponentIsNull_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_CanAutomaticallyRemove_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_CanAutomaticallyRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetAutoRemoveWhenIndicatorComponentIsNull", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::IndicatorDescriptor_eventSetAutoRemoveWhenIndicatorComponentIsNull_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics
	{
		struct IndicatorDescriptor_eventSetBoundingBoxAnchor_Parms
		{
			FVector InBoundingBoxAnchor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBoundingBoxAnchor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::NewProp_InBoundingBoxAnchor = { "InBoundingBoxAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetBoundingBoxAnchor_Parms, InBoundingBoxAnchor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::NewProp_InBoundingBoxAnchor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetBoundingBoxAnchor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::IndicatorDescriptor_eventSetBoundingBoxAnchor_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics
	{
		struct IndicatorDescriptor_eventSetClampToScreen_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((IndicatorDescriptor_eventSetClampToScreen_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IndicatorDescriptor_eventSetClampToScreen_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetClampToScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::IndicatorDescriptor_eventSetClampToScreen_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics
	{
		struct IndicatorDescriptor_eventSetComponentSocketName_Parms
		{
			FName SocketName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetComponentSocketName_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::NewProp_SocketName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetComponentSocketName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::IndicatorDescriptor_eventSetComponentSocketName_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics
	{
		struct IndicatorDescriptor_eventSetDataObject_Parms
		{
			UObject* InDataObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::NewProp_InDataObject = { "InDataObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetDataObject_Parms, InDataObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::NewProp_InDataObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetDataObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::IndicatorDescriptor_eventSetDataObject_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics
	{
		struct IndicatorDescriptor_eventSetDesiredVisibility_Parms
		{
			bool InVisible;
		};
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((IndicatorDescriptor_eventSetDesiredVisibility_Parms*)Obj)->InVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IndicatorDescriptor_eventSetDesiredVisibility_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::NewProp_InVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetDesiredVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::IndicatorDescriptor_eventSetDesiredVisibility_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics
	{
		struct IndicatorDescriptor_eventSetHAlign_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InHAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::NewProp_InHAlignment = { "InHAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetHAlign_Parms, InHAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::NewProp_InHAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetHAlign", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::IndicatorDescriptor_eventSetHAlign_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics
	{
		struct IndicatorDescriptor_eventSetIndicatorClass_Parms
		{
			TSoftClassPtr<UUserWidget>  InIndicatorWidgetClass;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InIndicatorWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::NewProp_InIndicatorWidgetClass = { "InIndicatorWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetIndicatorClass_Parms, InIndicatorWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::NewProp_InIndicatorWidgetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetIndicatorClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::IndicatorDescriptor_eventSetIndicatorClass_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics
	{
		struct IndicatorDescriptor_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::NewProp_InPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::IndicatorDescriptor_eventSetPriority_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics
	{
		struct IndicatorDescriptor_eventSetProjectionMode_Parms
		{
			EActorCanvasProjectionMode InProjectionMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InProjectionMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InProjectionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::NewProp_InProjectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::NewProp_InProjectionMode = { "InProjectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetProjectionMode_Parms, InProjectionMode), Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode, METADATA_PARAMS(nullptr, 0) }; // 3986140753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::NewProp_InProjectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::NewProp_InProjectionMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetProjectionMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::IndicatorDescriptor_eventSetProjectionMode_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics
	{
		struct IndicatorDescriptor_eventSetSceneComponent_Parms
		{
			USceneComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetSceneComponent_Parms, InComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetSceneComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::IndicatorDescriptor_eventSetSceneComponent_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics
	{
		struct IndicatorDescriptor_eventSetScreenSpaceOffset_Parms
		{
			FVector2D Offset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetScreenSpaceOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetScreenSpaceOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::IndicatorDescriptor_eventSetScreenSpaceOffset_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics
	{
		struct IndicatorDescriptor_eventSetShowClampToScreenArrow_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((IndicatorDescriptor_eventSetShowClampToScreenArrow_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IndicatorDescriptor_eventSetShowClampToScreenArrow_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetShowClampToScreenArrow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::IndicatorDescriptor_eventSetShowClampToScreenArrow_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics
	{
		struct IndicatorDescriptor_eventSetVAlign_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InVAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::NewProp_InVAlignment = { "InVAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetVAlign_Parms, InVAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::NewProp_InVAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetVAlign", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::IndicatorDescriptor_eventSetVAlign_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics
	{
		struct IndicatorDescriptor_eventSetWorldPositionOffset_Parms
		{
			FVector Offset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorDescriptor_eventSetWorldPositionOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetWorldPositionOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::IndicatorDescriptor_eventSetWorldPositionOffset_Parms), Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "UnregisterIndicator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIndicatorDescriptor);
	UClass* Z_Construct_UClass_UIndicatorDescriptor_NoRegister()
	{
		return UIndicatorDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UIndicatorDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampToScreen_MetaData[];
#endif
		static void NewProp_bClampToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowClampToScreenArrow_MetaData[];
#endif
		static void NewProp_bShowClampToScreenArrow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowClampToScreenArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideScreenPosition_MetaData[];
#endif
		static void NewProp_bOverrideScreenPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideScreenPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRemoveWhenIndicatorComponentIsNull_MetaData[];
#endif
		static void NewProp_bAutoRemoveWhenIndicatorComponentIsNull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRemoveWhenIndicatorComponentIsNull;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxAnchor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSpaceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPositionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_IndicatorWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagerPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ManagerPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIndicatorDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIndicatorDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull, "GetAutoRemoveWhenIndicatorComponentIsNull" }, // 1399209344
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor, "GetBoundingBoxAnchor" }, // 1336795757
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen, "GetClampToScreen" }, // 2290320385
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName, "GetComponentSocketName" }, // 2872595656
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject, "GetDataObject" }, // 2182199156
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign, "GetHAlign" }, // 623695132
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass, "GetIndicatorClass" }, // 2211137034
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible, "GetIsVisible" }, // 722034404
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetPriority, "GetPriority" }, // 3974205609
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode, "GetProjectionMode" }, // 1614594118
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent, "GetSceneComponent" }, // 503215512
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset, "GetScreenSpaceOffset" }, // 1605492564
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow, "GetShowClampToScreenArrow" }, // 4130767200
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign, "GetVAlign" }, // 1210030890
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset, "GetWorldPositionOffset" }, // 1522232485
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull, "SetAutoRemoveWhenIndicatorComponentIsNull" }, // 628533904
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor, "SetBoundingBoxAnchor" }, // 3236971004
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen, "SetClampToScreen" }, // 993834280
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName, "SetComponentSocketName" }, // 2156544231
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject, "SetDataObject" }, // 3318173113
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility, "SetDesiredVisibility" }, // 3645109987
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign, "SetHAlign" }, // 2108493736
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass, "SetIndicatorClass" }, // 503660438
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetPriority, "SetPriority" }, // 3211720196
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode, "SetProjectionMode" }, // 2130394062
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent, "SetSceneComponent" }, // 3813026124
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset, "SetScreenSpaceOffset" }, // 846066456
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow, "SetShowClampToScreenArrow" }, // 916582833
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign, "SetVAlign" }, // 844521253
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset, "SetWorldPositionOffset" }, // 544484787
		{ &Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator, "UnregisterIndicator" }, // 3800324805
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes and controls an active indicator.  It is highly recommended that your widget implements\n * IActorIndicatorWidget so that it can 'bind' to the associated data.\n */" },
		{ "IncludePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ToolTip", "Describes and controls an active indicator.  It is highly recommended that your widget implements\nIActorIndicatorWidget so that it can 'bind' to the associated data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UIndicatorDescriptor*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen_SetBit(void* Obj)
	{
		((UIndicatorDescriptor*)Obj)->bClampToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen = { "bClampToScreen", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow_SetBit(void* Obj)
	{
		((UIndicatorDescriptor*)Obj)->bShowClampToScreenArrow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow = { "bShowClampToScreenArrow", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition_SetBit(void* Obj)
	{
		((UIndicatorDescriptor*)Obj)->bOverrideScreenPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition = { "bOverrideScreenPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull_SetBit(void* Obj)
	{
		((UIndicatorDescriptor*)Obj)->bAutoRemoveWhenIndicatorComponentIsNull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull = { "bAutoRemoveWhenIndicatorComponentIsNull", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, ProjectionMode), Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode_MetaData)) }; // 3986140753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_HAlignment_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_HAlignment = { "HAlignment", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, HAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_HAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_HAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_VAlignment_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_VAlignment = { "VAlignment", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, VAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_VAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_VAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, Priority), METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_BoundingBoxAnchor_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_BoundingBoxAnchor = { "BoundingBoxAnchor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, BoundingBoxAnchor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_BoundingBoxAnchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_BoundingBoxAnchor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ScreenSpaceOffset_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ScreenSpaceOffset = { "ScreenSpaceOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, ScreenSpaceOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ScreenSpaceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ScreenSpaceOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_WorldPositionOffset_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_WorldPositionOffset = { "WorldPositionOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, WorldPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_WorldPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_WorldPositionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_DataObject_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_DataObject = { "DataObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, DataObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_DataObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_DataObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ComponentSocketName_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ComponentSocketName = { "ComponentSocketName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, ComponentSocketName), METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ComponentSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ComponentSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_IndicatorWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_IndicatorWidgetClass = { "IndicatorWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, IndicatorWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_IndicatorWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_IndicatorWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ManagerPtr_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ManagerPtr = { "ManagerPtr", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorDescriptor, ManagerPtr), Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ManagerPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ManagerPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIndicatorDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_HAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_VAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_BoundingBoxAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ScreenSpaceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_WorldPositionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_DataObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ComponentSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_IndicatorWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ManagerPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIndicatorDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndicatorDescriptor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIndicatorDescriptor_Statics::ClassParams = {
		&UIndicatorDescriptor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIndicatorDescriptor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIndicatorDescriptor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIndicatorDescriptor()
	{
		if (!Z_Registration_Info_UClass_UIndicatorDescriptor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIndicatorDescriptor.OuterSingleton, Z_Construct_UClass_UIndicatorDescriptor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIndicatorDescriptor.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UIndicatorDescriptor>()
	{
		return UIndicatorDescriptor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIndicatorDescriptor);
	UIndicatorDescriptor::~UIndicatorDescriptor() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::EnumInfo[] = {
		{ EActorCanvasProjectionMode_StaticEnum, TEXT("EActorCanvasProjectionMode"), &Z_Registration_Info_UEnum_EActorCanvasProjectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3986140753U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIndicatorDescriptor, UIndicatorDescriptor::StaticClass, TEXT("UIndicatorDescriptor"), &Z_Registration_Info_UClass_UIndicatorDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIndicatorDescriptor), 619838562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_4058851201(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
