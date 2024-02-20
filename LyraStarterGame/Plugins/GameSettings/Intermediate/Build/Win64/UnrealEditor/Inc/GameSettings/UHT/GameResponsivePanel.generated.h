// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Responsive/GameResponsivePanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameResponsivePanelSlot;
class UWidget;
#ifdef GAMESETTINGS_GameResponsivePanel_generated_h
#error "GameResponsivePanel.generated.h already included, missing '#pragma once' in GameResponsivePanel.h"
#endif
#define GAMESETTINGS_GameResponsivePanel_generated_h

#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_SPARSE_DATA
#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToGameResponsivePanel);


#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToGameResponsivePanel);


#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_ACCESSORS
#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameResponsivePanel(); \
	friend struct Z_Construct_UClass_UGameResponsivePanel_Statics; \
public: \
	DECLARE_CLASS(UGameResponsivePanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameResponsivePanel)


#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGameResponsivePanel(); \
	friend struct Z_Construct_UClass_UGameResponsivePanel_Statics; \
public: \
	DECLARE_CLASS(UGameResponsivePanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameResponsivePanel)


#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameResponsivePanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameResponsivePanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameResponsivePanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameResponsivePanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameResponsivePanel(UGameResponsivePanel&&); \
	NO_API UGameResponsivePanel(const UGameResponsivePanel&); \
public: \
	NO_API virtual ~UGameResponsivePanel();


#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameResponsivePanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameResponsivePanel(UGameResponsivePanel&&); \
	NO_API UGameResponsivePanel(const UGameResponsivePanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameResponsivePanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameResponsivePanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameResponsivePanel) \
	NO_API virtual ~UGameResponsivePanel();


#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_16_PROLOG
#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_RPC_WRAPPERS \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_ACCESSORS \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_INCLASS \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_ACCESSORS \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameResponsivePanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESETTINGS_API UClass* StaticClass<class UGameResponsivePanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Plugins_GameSettings_Source_Private_Widgets_Responsive_GameResponsivePanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
