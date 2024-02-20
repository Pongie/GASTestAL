// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PerformanceStats/LyraPerfStatWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELyraDisplayablePerformanceStat : uint8;
#ifdef LYRAGAME_LyraPerfStatWidgetBase_generated_h
#error "LyraPerfStatWidgetBase.generated.h already included, missing '#pragma once' in LyraPerfStatWidgetBase.h"
#endif
#define LYRAGAME_LyraPerfStatWidgetBase_generated_h

#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFetchStatValue); \
	DECLARE_FUNCTION(execGetStatToDisplay);


#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFetchStatValue); \
	DECLARE_FUNCTION(execGetStatToDisplay);


#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraPerfStatWidgetBase(); \
	friend struct Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics; \
public: \
	DECLARE_CLASS(ULyraPerfStatWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraPerfStatWidgetBase)


#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULyraPerfStatWidgetBase(); \
	friend struct Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics; \
public: \
	DECLARE_CLASS(ULyraPerfStatWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraPerfStatWidgetBase)


#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraPerfStatWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraPerfStatWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraPerfStatWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPerfStatWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraPerfStatWidgetBase(ULyraPerfStatWidgetBase&&); \
	NO_API ULyraPerfStatWidgetBase(const ULyraPerfStatWidgetBase&); \
public: \
	NO_API virtual ~ULyraPerfStatWidgetBase();


#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraPerfStatWidgetBase(ULyraPerfStatWidgetBase&&); \
	NO_API ULyraPerfStatWidgetBase(const ULyraPerfStatWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraPerfStatWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPerfStatWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraPerfStatWidgetBase) \
	NO_API virtual ~ULyraPerfStatWidgetBase();


#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_20_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraPerfStatWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
