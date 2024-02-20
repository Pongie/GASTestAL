// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/IndicatorSystem/LyraIndicatorManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIndicatorDescriptor;
#ifdef LYRAGAME_LyraIndicatorManagerComponent_generated_h
#error "LyraIndicatorManagerComponent.generated.h already included, missing '#pragma once' in LyraIndicatorManagerComponent.h"
#endif
#define LYRAGAME_LyraIndicatorManagerComponent_generated_h

#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveIndicator); \
	DECLARE_FUNCTION(execAddIndicator);


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveIndicator); \
	DECLARE_FUNCTION(execAddIndicator);


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraIndicatorManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraIndicatorManagerComponent, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraIndicatorManagerComponent)


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULyraIndicatorManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraIndicatorManagerComponent, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraIndicatorManagerComponent)


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraIndicatorManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraIndicatorManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraIndicatorManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraIndicatorManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraIndicatorManagerComponent(ULyraIndicatorManagerComponent&&); \
	NO_API ULyraIndicatorManagerComponent(const ULyraIndicatorManagerComponent&); \
public: \
	NO_API virtual ~ULyraIndicatorManagerComponent();


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraIndicatorManagerComponent(ULyraIndicatorManagerComponent&&); \
	NO_API ULyraIndicatorManagerComponent(const ULyraIndicatorManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraIndicatorManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraIndicatorManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraIndicatorManagerComponent) \
	NO_API virtual ~ULyraIndicatorManagerComponent();


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_17_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraIndicatorManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
