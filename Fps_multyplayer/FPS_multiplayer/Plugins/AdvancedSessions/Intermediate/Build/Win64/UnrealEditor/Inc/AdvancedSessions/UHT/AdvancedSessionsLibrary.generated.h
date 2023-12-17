// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdvancedSessionsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class APlayerState;
class UObject;
enum class EBlueprintResultSwitch : uint8;
enum class EBPOnlineSessionState : uint8;
enum class EOnlineComparisonOpRedux : uint8;
enum class ESessionSettingSearchResult : uint8;
struct FBlueprintSessionResult;
struct FBPUniqueNetId;
struct FSessionPropertyKeyPair;
struct FSessionsSearchSetting;
#ifdef ADVANCEDSESSIONS_AdvancedSessionsLibrary_generated_h
#error "AdvancedSessionsLibrary.generated.h already included, missing '#pragma once' in AdvancedSessionsLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedSessionsLibrary_generated_h

#define FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA
#define FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerTravel); \
	DECLARE_FUNCTION(execHasOnlineSubsystem); \
	DECLARE_FUNCTION(execGetNetPlayerIndex); \
	DECLARE_FUNCTION(execGetNumberOfNetworkPlayers); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execUniqueNetIdToString); \
	DECLARE_FUNCTION(execEqualEqual_UNetIDUnetID); \
	DECLARE_FUNCTION(execIsValidUniqueNetID); \
	DECLARE_FUNCTION(execGetUniqueNetIDFromPlayerState); \
	DECLARE_FUNCTION(execGetUniqueNetID); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyFloat); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyInt); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyString); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyBool); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyByte); \
	DECLARE_FUNCTION(execGetSessionPropertyFloat); \
	DECLARE_FUNCTION(execGetSessionPropertyInt); \
	DECLARE_FUNCTION(execGetSessionPropertyString); \
	DECLARE_FUNCTION(execGetSessionPropertyBool); \
	DECLARE_FUNCTION(execGetSessionPropertyByte); \
	DECLARE_FUNCTION(execFindSessionPropertyIndexByName); \
	DECLARE_FUNCTION(execFindSessionPropertyByName); \
	DECLARE_FUNCTION(execGetSessionPropertyKey); \
	DECLARE_FUNCTION(execGetUniqueBuildID); \
	DECLARE_FUNCTION(execGetCurrentUniqueBuildID); \
	DECLARE_FUNCTION(execGetCurrentSessionID_AsString); \
	DECLARE_FUNCTION(execGetSessionID_AsString); \
	DECLARE_FUNCTION(execIsValidSession); \
	DECLARE_FUNCTION(execMakeLiteralSessionSearchProperty); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execGetExtraSettings); \
	DECLARE_FUNCTION(execAddOrModifyExtraSettings); \
	DECLARE_FUNCTION(execBanPlayer); \
	DECLARE_FUNCTION(execKickPlayer);


#define FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ACCESSORS
#define FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedSessionsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedSessionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedSessionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSessionsLibrary)


#define FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSessionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSessionsLibrary(UAdvancedSessionsLibrary&&); \
	NO_API UAdvancedSessionsLibrary(const UAdvancedSessionsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSessionsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSessionsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSessionsLibrary) \
	NO_API virtual ~UAdvancedSessionsLibrary();


#define FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_29_PROLOG
#define FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA \
	FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ACCESSORS \
	FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedSessionsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
