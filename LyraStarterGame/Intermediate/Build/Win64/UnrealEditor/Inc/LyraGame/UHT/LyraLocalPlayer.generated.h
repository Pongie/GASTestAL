// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/LyraLocalPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraSettingsLocal;
class ULyraSettingsShared;
class UObject;
struct FSwapAudioOutputResult;
#ifdef LYRAGAME_LyraLocalPlayer_generated_h
#error "LyraLocalPlayer.generated.h already included, missing '#pragma once' in LyraLocalPlayer.h"
#endif
#define LYRAGAME_LyraLocalPlayer_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnControllerChangedTeam); \
	DECLARE_FUNCTION(execOnCompletedAudioDeviceSwap); \
	DECLARE_FUNCTION(execGetSharedSettings); \
	DECLARE_FUNCTION(execGetLocalSettings);


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnControllerChangedTeam); \
	DECLARE_FUNCTION(execOnCompletedAudioDeviceSwap); \
	DECLARE_FUNCTION(execGetSharedSettings); \
	DECLARE_FUNCTION(execGetLocalSettings);


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraLocalPlayer(); \
	friend struct Z_Construct_UClass_ULyraLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(ULyraLocalPlayer, UCommonLocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraLocalPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraLocalPlayer*>(this); }


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_INCLASS \
private: \
	static void StaticRegisterNativesULyraLocalPlayer(); \
	friend struct Z_Construct_UClass_ULyraLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(ULyraLocalPlayer, UCommonLocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraLocalPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraLocalPlayer*>(this); }


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraLocalPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraLocalPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraLocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraLocalPlayer(ULyraLocalPlayer&&); \
	NO_API ULyraLocalPlayer(const ULyraLocalPlayer&); \
public: \
	NO_API virtual ~ULyraLocalPlayer();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraLocalPlayer(ULyraLocalPlayer&&); \
	NO_API ULyraLocalPlayer(const ULyraLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraLocalPlayer) \
	NO_API virtual ~ULyraLocalPlayer();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_24_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
