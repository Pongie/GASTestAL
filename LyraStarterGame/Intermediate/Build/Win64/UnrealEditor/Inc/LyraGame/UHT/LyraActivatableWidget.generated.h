// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/LyraActivatableWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraActivatableWidget_generated_h
#error "LyraActivatableWidget.generated.h already included, missing '#pragma once' in LyraActivatableWidget.h"
#endif
#define LYRAGAME_LyraActivatableWidget_generated_h

#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_RPC_WRAPPERS
#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraActivatableWidget(); \
	friend struct Z_Construct_UClass_ULyraActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(ULyraActivatableWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraActivatableWidget)


#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_INCLASS \
private: \
	static void StaticRegisterNativesULyraActivatableWidget(); \
	friend struct Z_Construct_UClass_ULyraActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(ULyraActivatableWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraActivatableWidget)


#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraActivatableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraActivatableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraActivatableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraActivatableWidget(ULyraActivatableWidget&&); \
	NO_API ULyraActivatableWidget(const ULyraActivatableWidget&); \
public: \
	NO_API virtual ~ULyraActivatableWidget();


#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraActivatableWidget(ULyraActivatableWidget&&); \
	NO_API ULyraActivatableWidget(const ULyraActivatableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraActivatableWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraActivatableWidget) \
	NO_API virtual ~ULyraActivatableWidget();


#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_21_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraActivatableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h


#define FOREACH_ENUM_ELYRAWIDGETINPUTMODE(op) \
	op(ELyraWidgetInputMode::Default) \
	op(ELyraWidgetInputMode::GameAndMenu) \
	op(ELyraWidgetInputMode::Game) \
	op(ELyraWidgetInputMode::Menu) 

enum class ELyraWidgetInputMode : uint8;
template<> struct TIsUEnumClass<ELyraWidgetInputMode> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraWidgetInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
