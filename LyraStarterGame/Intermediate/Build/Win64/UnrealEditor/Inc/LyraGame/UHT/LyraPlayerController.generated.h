// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/LyraPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALyraHUD;
class ALyraPlayerState;
class ULyraAbilitySystemComponent;
class UObject;
#ifdef LYRAGAME_LyraPlayerController_generated_h
#error "LyraPlayerController.generated.h already included, missing '#pragma once' in LyraPlayerController.h"
#endif
#define LYRAGAME_LyraPlayerController_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_RPC_WRAPPERS \
	virtual bool ServerCheatAll_Validate(const FString& ); \
	virtual void ServerCheatAll_Implementation(const FString& Msg); \
	virtual bool ServerCheat_Validate(const FString& ); \
	virtual void ServerCheat_Implementation(const FString& Msg); \
 \
	DECLARE_FUNCTION(execOnPlayerStateChangedTeam); \
	DECLARE_FUNCTION(execGetIsAutoRunning); \
	DECLARE_FUNCTION(execSetIsAutoRunning); \
	DECLARE_FUNCTION(execServerCheatAll); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execGetLyraHUD); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerState);


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCheatAll_Validate(const FString& ); \
	virtual void ServerCheatAll_Implementation(const FString& Msg); \
	virtual bool ServerCheat_Validate(const FString& ); \
	virtual void ServerCheat_Implementation(const FString& Msg); \
 \
	DECLARE_FUNCTION(execOnPlayerStateChangedTeam); \
	DECLARE_FUNCTION(execGetIsAutoRunning); \
	DECLARE_FUNCTION(execSetIsAutoRunning); \
	DECLARE_FUNCTION(execServerCheatAll); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execGetLyraHUD); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerState);


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_CALLBACK_WRAPPERS
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraPlayerController(); \
	friend struct Z_Construct_UClass_ALyraPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALyraPlayerController, ACommonPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPlayerController*>(this); }


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_INCLASS \
private: \
	static void StaticRegisterNativesALyraPlayerController(); \
	friend struct Z_Construct_UClass_ALyraPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALyraPlayerController, ACommonPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPlayerController*>(this); }


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraPlayerController(ALyraPlayerController&&); \
	NO_API ALyraPlayerController(const ALyraPlayerController&); \
public: \
	NO_API virtual ~ALyraPlayerController();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraPlayerController(ALyraPlayerController&&); \
	NO_API ALyraPlayerController(const ALyraPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPlayerController) \
	NO_API virtual ~ALyraPlayerController();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_30_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_CALLBACK_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_CALLBACK_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraPlayerController>();

#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_RPC_WRAPPERS
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraReplayPlayerController(); \
	friend struct Z_Construct_UClass_ALyraReplayPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALyraReplayPlayerController, ALyraPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraReplayPlayerController)


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_INCLASS \
private: \
	static void StaticRegisterNativesALyraReplayPlayerController(); \
	friend struct Z_Construct_UClass_ALyraReplayPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALyraReplayPlayerController, ALyraPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraReplayPlayerController)


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraReplayPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraReplayPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraReplayPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraReplayPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraReplayPlayerController(ALyraReplayPlayerController&&); \
	NO_API ALyraReplayPlayerController(const ALyraReplayPlayerController&); \
public: \
	NO_API virtual ~ALyraReplayPlayerController();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraReplayPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraReplayPlayerController(ALyraReplayPlayerController&&); \
	NO_API ALyraReplayPlayerController(const ALyraReplayPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraReplayPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraReplayPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraReplayPlayerController) \
	NO_API virtual ~ALyraReplayPlayerController();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_143_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraReplayPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
