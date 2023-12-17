// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdvancedFriendsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
enum class EBlueprintResultSwitch : uint8;
struct FBPFriendInfo;
struct FBPOnlineRecentPlayer;
struct FBPUniqueNetId;
#ifdef ADVANCEDSESSIONS_AdvancedFriendsLibrary_generated_h
#error "AdvancedFriendsLibrary.generated.h already included, missing '#pragma once' in AdvancedFriendsLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedFriendsLibrary_generated_h

#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_SPARSE_DATA
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAFriend); \
	DECLARE_FUNCTION(execGetStoredRecentPlayersList); \
	DECLARE_FUNCTION(execGetStoredFriendsList); \
	DECLARE_FUNCTION(execGetFriend); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend); \
	DECLARE_FUNCTION(execSendSessionInviteToFriends);


#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_ACCESSORS
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsLibrary)


#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsLibrary(UAdvancedFriendsLibrary&&); \
	NO_API UAdvancedFriendsLibrary(const UAdvancedFriendsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsLibrary) \
	NO_API virtual ~UAdvancedFriendsLibrary();


#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_25_PROLOG
#define FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_SPARSE_DATA \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_ACCESSORS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedFriendsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
