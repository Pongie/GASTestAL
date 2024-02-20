// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Weapons/LyraReticleWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraWeaponInstance;
#ifdef LYRAGAME_LyraReticleWidgetBase_generated_h
#error "LyraReticleWidgetBase.generated.h already included, missing '#pragma once' in LyraReticleWidgetBase.h"
#endif
#define LYRAGAME_LyraReticleWidgetBase_generated_h

#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasFirstShotAccuracy); \
	DECLARE_FUNCTION(execComputeMaxScreenspaceSpreadRadius); \
	DECLARE_FUNCTION(execComputeSpreadAngle); \
	DECLARE_FUNCTION(execInitializeFromWeapon);


#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasFirstShotAccuracy); \
	DECLARE_FUNCTION(execComputeMaxScreenspaceSpreadRadius); \
	DECLARE_FUNCTION(execComputeSpreadAngle); \
	DECLARE_FUNCTION(execInitializeFromWeapon);


#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_CALLBACK_WRAPPERS
#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraReticleWidgetBase(); \
	friend struct Z_Construct_UClass_ULyraReticleWidgetBase_Statics; \
public: \
	DECLARE_CLASS(ULyraReticleWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReticleWidgetBase)


#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULyraReticleWidgetBase(); \
	friend struct Z_Construct_UClass_ULyraReticleWidgetBase_Statics; \
public: \
	DECLARE_CLASS(ULyraReticleWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReticleWidgetBase)


#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraReticleWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraReticleWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReticleWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReticleWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraReticleWidgetBase(ULyraReticleWidgetBase&&); \
	NO_API ULyraReticleWidgetBase(const ULyraReticleWidgetBase&); \
public: \
	NO_API virtual ~ULyraReticleWidgetBase();


#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraReticleWidgetBase(ULyraReticleWidgetBase&&); \
	NO_API ULyraReticleWidgetBase(const ULyraReticleWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReticleWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReticleWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraReticleWidgetBase) \
	NO_API virtual ~ULyraReticleWidgetBase();


#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_14_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_CALLBACK_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_CALLBACK_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraReticleWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
