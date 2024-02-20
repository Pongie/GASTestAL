// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUserInfo;
enum class ECommonUserAvailability : uint8;
enum class ECommonUserInitializationState : uint8;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
enum class ECommonUserPrivilegeResult : uint8;
struct FCommonUserInitializeParams;
struct FGameplayTag;
struct FInputDeviceId;
struct FKey;
struct FPlatformUserId;
struct FUniqueNetIdRepl;
#ifdef COMMONUSER_CommonUserSubsystem_generated_h
#error "CommonUserSubsystem.generated.h already included, missing '#pragma once' in CommonUserSubsystem.h"
#endif
#define COMMONUSER_CommonUserSubsystem_generated_h

#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_SPARSE_DATA
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetNickname); \
	DECLARE_FUNCTION(execGetNetId); \
	DECLARE_FUNCTION(execGetPrivilegeAvailability); \
	DECLARE_FUNCTION(execGetCachedPrivilegeResult); \
	DECLARE_FUNCTION(execIsDoingLogin); \
	DECLARE_FUNCTION(execIsLoggedIn);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetNickname); \
	DECLARE_FUNCTION(execGetNetId); \
	DECLARE_FUNCTION(execGetPrivilegeAvailability); \
	DECLARE_FUNCTION(execGetCachedPrivilegeResult); \
	DECLARE_FUNCTION(execIsDoingLogin); \
	DECLARE_FUNCTION(execIsLoggedIn);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_ACCESSORS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUserInfo(); \
	friend struct Z_Construct_UClass_UCommonUserInfo_Statics; \
public: \
	DECLARE_CLASS(UCommonUserInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserInfo)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUserInfo(); \
	friend struct Z_Construct_UClass_UCommonUserInfo_Statics; \
public: \
	DECLARE_CLASS(UCommonUserInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserInfo)


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUserInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUserInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserInfo(UCommonUserInfo&&); \
	NO_API UCommonUserInfo(const UCommonUserInfo&); \
public: \
	NO_API virtual ~UCommonUserInfo();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUserInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserInfo(UCommonUserInfo&&); \
	NO_API UCommonUserInfo(const UCommonUserInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUserInfo) \
	NO_API virtual ~UCommonUserInfo();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_42_PROLOG
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_RPC_WRAPPERS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_INCLASS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUSER_API UClass* StaticClass<class UCommonUserInfo>();

#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_137_DELEGATE \
COMMONUSER_API void FCommonUserOnInitializeCompleteMulticast_DelegateWrapper(const FMulticastScriptDelegate& CommonUserOnInitializeCompleteMulticast, const UCommonUserInfo* UserInfo, bool bSuccess, const FText& Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_138_DELEGATE \
COMMONUSER_API void FCommonUserOnInitializeComplete_DelegateWrapper(const FScriptDelegate& CommonUserOnInitializeComplete, const UCommonUserInfo* UserInfo, bool bSuccess, const FText& Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_141_DELEGATE \
COMMONUSER_API void FCommonUserHandleSystemMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& CommonUserHandleSystemMessageDelegate, FGameplayTag MessageType, const FText& TitleText, const FText& BodyText);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_144_DELEGATE \
COMMONUSER_API void FCommonUserAvailabilityChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CommonUserAvailabilityChangedDelegate, const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONUSER_API UScriptStruct* StaticStruct<struct FCommonUserInitializeParams>();

#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_SPARSE_DATA
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShouldWaitForStartInput); \
	DECLARE_FUNCTION(execHasTraitTag); \
	DECLARE_FUNCTION(execResetUserState); \
	DECLARE_FUNCTION(execTryToLogOutUser); \
	DECLARE_FUNCTION(execCancelUserInitialization); \
	DECLARE_FUNCTION(execListenForLoginKeyInput); \
	DECLARE_FUNCTION(execTryToInitializeUser); \
	DECLARE_FUNCTION(execTryToLoginForOnlinePlay); \
	DECLARE_FUNCTION(execTryToInitializeForLocalPlay); \
	DECLARE_FUNCTION(execGetUserInfoForInputDevice); \
	DECLARE_FUNCTION(execGetUserInfoForControllerId); \
	DECLARE_FUNCTION(execGetUserInfoForUniqueNetId); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUser); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUserIndex); \
	DECLARE_FUNCTION(execGetUserInfoForLocalPlayerIndex); \
	DECLARE_FUNCTION(execGetLocalPlayerInitializationState); \
	DECLARE_FUNCTION(execGetNumLocalPlayers); \
	DECLARE_FUNCTION(execGetMaxLocalPlayers); \
	DECLARE_FUNCTION(execSetMaxLocalPlayers); \
	DECLARE_FUNCTION(execSendSystemMessage);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShouldWaitForStartInput); \
	DECLARE_FUNCTION(execHasTraitTag); \
	DECLARE_FUNCTION(execResetUserState); \
	DECLARE_FUNCTION(execTryToLogOutUser); \
	DECLARE_FUNCTION(execCancelUserInitialization); \
	DECLARE_FUNCTION(execListenForLoginKeyInput); \
	DECLARE_FUNCTION(execTryToInitializeUser); \
	DECLARE_FUNCTION(execTryToLoginForOnlinePlay); \
	DECLARE_FUNCTION(execTryToInitializeForLocalPlay); \
	DECLARE_FUNCTION(execGetUserInfoForInputDevice); \
	DECLARE_FUNCTION(execGetUserInfoForControllerId); \
	DECLARE_FUNCTION(execGetUserInfoForUniqueNetId); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUser); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUserIndex); \
	DECLARE_FUNCTION(execGetUserInfoForLocalPlayerIndex); \
	DECLARE_FUNCTION(execGetLocalPlayerInitializationState); \
	DECLARE_FUNCTION(execGetNumLocalPlayers); \
	DECLARE_FUNCTION(execGetMaxLocalPlayers); \
	DECLARE_FUNCTION(execSetMaxLocalPlayers); \
	DECLARE_FUNCTION(execSendSystemMessage);


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_ACCESSORS
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUserSubsystem(); \
	friend struct Z_Construct_UClass_UCommonUserSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonUserSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUserSubsystem(); \
	friend struct Z_Construct_UClass_UCommonUserSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonUserSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUserSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUserSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserSubsystem(UCommonUserSubsystem&&); \
	NO_API UCommonUserSubsystem(const UCommonUserSubsystem&); \
public: \
	NO_API virtual ~UCommonUserSubsystem();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserSubsystem(UCommonUserSubsystem&&); \
	NO_API UCommonUserSubsystem(const UCommonUserSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUserSubsystem) \
	NO_API virtual ~UCommonUserSubsystem();


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_199_PROLOG
#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_RPC_WRAPPERS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_INCLASS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_SPARSE_DATA \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_ACCESSORS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_202_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUSER_API UClass* StaticClass<class UCommonUserSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
