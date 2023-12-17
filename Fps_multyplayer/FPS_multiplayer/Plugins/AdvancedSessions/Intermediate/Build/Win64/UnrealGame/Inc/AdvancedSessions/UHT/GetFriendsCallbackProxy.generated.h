// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GetFriendsCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UGetFriendsCallbackProxy;
class UObject;
struct FBPFriendInfo;
#ifdef ADVANCEDSESSIONS_GetFriendsCallbackProxy_generated_h
#error "GetFriendsCallbackProxy.generated.h already included, missing '#pragma once' in GetFriendsCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_GetFriendsCallbackProxy_generated_h

#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_11_DELEGATE \
ADVANCEDSESSIONS_API void FBlueprintGetFriendsListDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGetFriendsListDelegate, TArray<FBPFriendInfo> const& Results);


#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_SPARSE_DATA
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAndStoreFriendsList);


#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_ACCESSORS
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGetFriendsCallbackProxy(); \
	friend struct Z_Construct_UClass_UGetFriendsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UGetFriendsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UGetFriendsCallbackProxy)


#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UGetFriendsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetFriendsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UGetFriendsCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetFriendsCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UGetFriendsCallbackProxy(UGetFriendsCallbackProxy&&); \
	ADVANCEDSESSIONS_API UGetFriendsCallbackProxy(const UGetFriendsCallbackProxy&); \
public: \
	ADVANCEDSESSIONS_API virtual ~UGetFriendsCallbackProxy();


#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_13_PROLOG
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_SPARSE_DATA \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_RPC_WRAPPERS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_ACCESSORS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_INCLASS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UGetFriendsCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetFriendsCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
