// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCommonSession_HostSessionRequest;
class UCommonSession_SearchResult;
class UCommonSession_SearchSessionRequest;
struct FOnlineResultInformation;
struct FPlatformUserId;
#ifdef COMMONUSER_CommonSessionSubsystem_generated_h
#error "CommonSessionSubsystem.generated.h already included, missing '#pragma once' in CommonSessionSubsystem.h"
#endif
#define COMMONUSER_CommonSessionSubsystem_generated_h

#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_SPARSE_DATA
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_RPC_WRAPPERS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_ACCESSORS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSession_HostSessionRequest(); \
	friend struct Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics; \
public: \
	DECLARE_CLASS(UCommonSession_HostSessionRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSession_HostSessionRequest)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUCommonSession_HostSessionRequest(); \
	friend struct Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics; \
public: \
	DECLARE_CLASS(UCommonSession_HostSessionRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSession_HostSessionRequest)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSession_HostSessionRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSession_HostSessionRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSession_HostSessionRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSession_HostSessionRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSession_HostSessionRequest(UCommonSession_HostSessionRequest&&); \
	NO_API UCommonSession_HostSessionRequest(const UCommonSession_HostSessionRequest&); \
public: \
	NO_API virtual ~UCommonSession_HostSessionRequest();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSession_HostSessionRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSession_HostSessionRequest(UCommonSession_HostSessionRequest&&); \
	NO_API UCommonSession_HostSessionRequest(const UCommonSession_HostSessionRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSession_HostSessionRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSession_HostSessionRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSession_HostSessionRequest) \
	NO_API virtual ~UCommonSession_HostSessionRequest();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_51_PROLOG
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_RPC_WRAPPERS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_INCLASS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUSER_API UClass* StaticClass<class UCommonSession_HostSessionRequest>();

#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_SPARSE_DATA
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPingInMs); \
	DECLARE_FUNCTION(execGetMaxPublicConnections); \
	DECLARE_FUNCTION(execGetNumOpenPublicConnections); \
	DECLARE_FUNCTION(execGetNumOpenPrivateConnections); \
	DECLARE_FUNCTION(execGetIntSetting); \
	DECLARE_FUNCTION(execGetStringSetting); \
	DECLARE_FUNCTION(execGetDescription);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPingInMs); \
	DECLARE_FUNCTION(execGetMaxPublicConnections); \
	DECLARE_FUNCTION(execGetNumOpenPublicConnections); \
	DECLARE_FUNCTION(execGetNumOpenPrivateConnections); \
	DECLARE_FUNCTION(execGetIntSetting); \
	DECLARE_FUNCTION(execGetStringSetting); \
	DECLARE_FUNCTION(execGetDescription);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_ACCESSORS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSession_SearchResult(); \
	friend struct Z_Construct_UClass_UCommonSession_SearchResult_Statics; \
public: \
	DECLARE_CLASS(UCommonSession_SearchResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSession_SearchResult)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_INCLASS \
private: \
	static void StaticRegisterNativesUCommonSession_SearchResult(); \
	friend struct Z_Construct_UClass_UCommonSession_SearchResult_Statics; \
public: \
	DECLARE_CLASS(UCommonSession_SearchResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSession_SearchResult)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSession_SearchResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSession_SearchResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSession_SearchResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSession_SearchResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSession_SearchResult(UCommonSession_SearchResult&&); \
	NO_API UCommonSession_SearchResult(const UCommonSession_SearchResult&); \
public: \
	NO_API virtual ~UCommonSession_SearchResult();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSession_SearchResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSession_SearchResult(UCommonSession_SearchResult&&); \
	NO_API UCommonSession_SearchResult(const UCommonSession_SearchResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSession_SearchResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSession_SearchResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSession_SearchResult) \
	NO_API virtual ~UCommonSession_SearchResult();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_100_PROLOG
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_RPC_WRAPPERS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_INCLASS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUSER_API UClass* StaticClass<class UCommonSession_SearchResult>();

#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_150_DELEGATE \
COMMONUSER_API void FCommonSession_FindSessionsFinishedDynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSession_FindSessionsFinishedDynamic, bool bSucceeded, const FText& ErrorMessage);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_SPARSE_DATA
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_RPC_WRAPPERS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_ACCESSORS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSession_SearchSessionRequest(); \
	friend struct Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics; \
public: \
	DECLARE_CLASS(UCommonSession_SearchSessionRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSession_SearchSessionRequest)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_INCLASS \
private: \
	static void StaticRegisterNativesUCommonSession_SearchSessionRequest(); \
	friend struct Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics; \
public: \
	DECLARE_CLASS(UCommonSession_SearchSessionRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSession_SearchSessionRequest)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSession_SearchSessionRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSession_SearchSessionRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSession_SearchSessionRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSession_SearchSessionRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSession_SearchSessionRequest(UCommonSession_SearchSessionRequest&&); \
	NO_API UCommonSession_SearchSessionRequest(const UCommonSession_SearchSessionRequest&); \
public: \
	NO_API virtual ~UCommonSession_SearchSessionRequest();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSession_SearchSessionRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSession_SearchSessionRequest(UCommonSession_SearchSessionRequest&&); \
	NO_API UCommonSession_SearchSessionRequest(const UCommonSession_SearchSessionRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSession_SearchSessionRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSession_SearchSessionRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSession_SearchSessionRequest) \
	NO_API virtual ~UCommonSession_SearchSessionRequest();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_153_PROLOG
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_RPC_WRAPPERS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_INCLASS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUSER_API UClass* StaticClass<class UCommonSession_SearchSessionRequest>();

#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_195_DELEGATE \
COMMONUSER_API void FCommonSessionOnUserRequestedSession_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnUserRequestedSession_Dynamic, FPlatformUserId const& LocalPlatformUserId, UCommonSession_SearchResult* RequestedSession, FOnlineResultInformation const& RequestedSessionResult);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_203_DELEGATE \
COMMONUSER_API void FCommonSessionOnJoinSessionComplete_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnJoinSessionComplete_Dynamic, FOnlineResultInformation const& Result);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_211_DELEGATE \
COMMONUSER_API void FCommonSessionOnCreateSessionComplete_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnCreateSessionComplete_Dynamic, FOnlineResultInformation const& Result);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_SPARSE_DATA
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCleanUpSessions); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execQuickPlaySession); \
	DECLARE_FUNCTION(execHostSession); \
	DECLARE_FUNCTION(execCreateOnlineSearchSessionRequest); \
	DECLARE_FUNCTION(execCreateOnlineHostSessionRequest);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCleanUpSessions); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execQuickPlaySession); \
	DECLARE_FUNCTION(execHostSession); \
	DECLARE_FUNCTION(execCreateOnlineSearchSessionRequest); \
	DECLARE_FUNCTION(execCreateOnlineHostSessionRequest);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_ACCESSORS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSessionSubsystem(); \
	friend struct Z_Construct_UClass_UCommonSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSessionSubsystem)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_INCLASS \
private: \
	static void StaticRegisterNativesUCommonSessionSubsystem(); \
	friend struct Z_Construct_UClass_UCommonSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSessionSubsystem)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSessionSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSessionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSessionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSessionSubsystem(UCommonSessionSubsystem&&); \
	NO_API UCommonSessionSubsystem(const UCommonSessionSubsystem&); \
public: \
	NO_API virtual ~UCommonSessionSubsystem();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSessionSubsystem(UCommonSessionSubsystem&&); \
	NO_API UCommonSessionSubsystem(const UCommonSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonSessionSubsystem) \
	NO_API virtual ~UCommonSessionSubsystem();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_227_PROLOG
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_RPC_WRAPPERS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_INCLASS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUSER_API UClass* StaticClass<class UCommonSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h


#define FOREACH_ENUM_ECOMMONSESSIONONLINEMODE(op) \
	op(ECommonSessionOnlineMode::Offline) \
	op(ECommonSessionOnlineMode::LAN) \
	op(ECommonSessionOnlineMode::Online) 

enum class ECommonSessionOnlineMode : uint8;
template<> struct TIsUEnumClass<ECommonSessionOnlineMode> { enum { Value = true }; };
template<> COMMONUSER_API UEnum* StaticEnum<ECommonSessionOnlineMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
