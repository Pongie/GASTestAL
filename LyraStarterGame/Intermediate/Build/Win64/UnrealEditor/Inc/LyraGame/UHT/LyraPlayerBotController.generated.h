// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/LyraPlayerBotController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIPerceptionComponent;
class UObject;
#ifdef LYRAGAME_LyraPlayerBotController_generated_h
#error "LyraPlayerBotController.generated.h already included, missing '#pragma once' in LyraPlayerBotController.h"
#endif
#define LYRAGAME_LyraPlayerBotController_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerStateChangedTeam); \
	DECLARE_FUNCTION(execUpdateTeamAttitude);


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerStateChangedTeam); \
	DECLARE_FUNCTION(execUpdateTeamAttitude);


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraPlayerBotController(); \
	friend struct Z_Construct_UClass_ALyraPlayerBotController_Statics; \
public: \
	DECLARE_CLASS(ALyraPlayerBotController, AModularAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPlayerBotController) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPlayerBotController*>(this); }


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesALyraPlayerBotController(); \
	friend struct Z_Construct_UClass_ALyraPlayerBotController_Statics; \
public: \
	DECLARE_CLASS(ALyraPlayerBotController, AModularAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPlayerBotController) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPlayerBotController*>(this); }


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraPlayerBotController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPlayerBotController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPlayerBotController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPlayerBotController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraPlayerBotController(ALyraPlayerBotController&&); \
	NO_API ALyraPlayerBotController(const ALyraPlayerBotController&); \
public: \
	NO_API virtual ~ALyraPlayerBotController();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraPlayerBotController(ALyraPlayerBotController&&); \
	NO_API ALyraPlayerBotController(const ALyraPlayerBotController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPlayerBotController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPlayerBotController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPlayerBotController) \
	NO_API virtual ~ALyraPlayerBotController();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_23_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraPlayerBotController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
