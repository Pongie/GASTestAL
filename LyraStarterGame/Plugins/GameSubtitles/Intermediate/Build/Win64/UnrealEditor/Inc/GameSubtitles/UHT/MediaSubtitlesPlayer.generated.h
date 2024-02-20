// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Players/MediaSubtitlesPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
class UOverlays;
#ifdef GAMESUBTITLES_MediaSubtitlesPlayer_generated_h
#error "MediaSubtitlesPlayer.generated.h already included, missing '#pragma once' in MediaSubtitlesPlayer.h"
#endif
#define GAMESUBTITLES_MediaSubtitlesPlayer_generated_h

#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_SPARSE_DATA
#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindToMediaPlayer); \
	DECLARE_FUNCTION(execSetSubtitles); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindToMediaPlayer); \
	DECLARE_FUNCTION(execSetSubtitles); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_ACCESSORS
#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSubtitlesPlayer(); \
	friend struct Z_Construct_UClass_UMediaSubtitlesPlayer_Statics; \
public: \
	DECLARE_CLASS(UMediaSubtitlesPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSubtitles"), NO_API) \
	DECLARE_SERIALIZER(UMediaSubtitlesPlayer)


#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMediaSubtitlesPlayer(); \
	friend struct Z_Construct_UClass_UMediaSubtitlesPlayer_Statics; \
public: \
	DECLARE_CLASS(UMediaSubtitlesPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSubtitles"), NO_API) \
	DECLARE_SERIALIZER(UMediaSubtitlesPlayer)


#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSubtitlesPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSubtitlesPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSubtitlesPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSubtitlesPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSubtitlesPlayer(UMediaSubtitlesPlayer&&); \
	NO_API UMediaSubtitlesPlayer(const UMediaSubtitlesPlayer&); \
public: \
	NO_API virtual ~UMediaSubtitlesPlayer();


#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSubtitlesPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSubtitlesPlayer(UMediaSubtitlesPlayer&&); \
	NO_API UMediaSubtitlesPlayer(const UMediaSubtitlesPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSubtitlesPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSubtitlesPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSubtitlesPlayer) \
	NO_API virtual ~UMediaSubtitlesPlayer();


#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_20_PROLOG
#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_RPC_WRAPPERS \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_ACCESSORS \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_INCLASS \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_ACCESSORS \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaSubtitlesPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESUBTITLES_API UClass* StaticClass<class UMediaSubtitlesPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Plugins_GameSubtitles_Source_Public_Players_MediaSubtitlesPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
