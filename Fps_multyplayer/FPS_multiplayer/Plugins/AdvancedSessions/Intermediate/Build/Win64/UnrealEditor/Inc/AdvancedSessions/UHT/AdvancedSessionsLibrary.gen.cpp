// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedSessionsLibrary.h"
#include "AdvancedSessions/Classes/BlueprintDataDefinitions.h"
#include "FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedSessionsLibrary() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSessionsLibrary();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSessionsLibrary_NoRegister();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execServerTravel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InURL);
		P_GET_UBOOL(Z_Param_bAbsolute);
		P_GET_UBOOL(Z_Param_bShouldSkipGameNotify);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::ServerTravel(Z_Param_WorldContextObject,Z_Param_InURL,Z_Param_bAbsolute,Z_Param_bShouldSkipGameNotify);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execHasOnlineSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubSystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::HasOnlineSubsystem(Z_Param_SubSystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetNetPlayerIndex)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetNetPlayerIndex(Z_Param_PlayerController,Z_Param_Out_NetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetNumberOfNetworkPlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumNetPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetNumberOfNetworkPlayers(Z_Param_WorldContextObject,Z_Param_Out_NumNetPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execSetPlayerName)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::SetPlayerName(Z_Param_PlayerController,Z_Param_PlayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetPlayerName)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PlayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetPlayerName(Z_Param_PlayerController,Z_Param_Out_PlayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execUniqueNetIdToString)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::UniqueNetIdToString(Z_Param_Out_UniqueNetId,Z_Param_Out_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execEqualEqual_UNetIDUnetID)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_A);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execIsValidUniqueNetID)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::IsValidUniqueNetID(Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetUniqueNetIDFromPlayerState)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(Z_Param_PlayerState,Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetUniqueNetID)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetUniqueNetID(Z_Param_PlayerController,Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyFloat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyInt)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyBool)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyByte)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyFloat)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyFloat(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyInt)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyInt(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyString)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyString(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyBool)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_UBOOL_REF(Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyBool(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyByte)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyByte(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execFindSessionPropertyIndexByName)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::FindSessionPropertyIndexByName(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(EBlueprintResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execFindSessionPropertyByName)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingsName);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_GET_STRUCT_REF(FSessionPropertyKeyPair,Z_Param_Out_OutProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::FindSessionPropertyByName(Z_Param_Out_ExtraSettings,Z_Param_SettingsName,(EBlueprintResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_OutProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyKey)
	{
		P_GET_STRUCT_REF(FSessionPropertyKeyPair,Z_Param_Out_SessionProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAdvancedSessionsLibrary::GetSessionPropertyKey(Z_Param_Out_SessionProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetUniqueBuildID)
	{
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UniqueBuildId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetUniqueBuildID(Z_Param_SessionResult,Z_Param_Out_UniqueBuildId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetCurrentUniqueBuildID)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UniqueBuildId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetCurrentUniqueBuildID(Z_Param_Out_UniqueBuildId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetCurrentSessionID_AsString)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetCurrentSessionID_AsString(Z_Param_WorldContextObject,Z_Param_Out_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionID_AsString)
	{
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SessionResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionID_AsString(Z_Param_Out_SessionResult,Z_Param_Out_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execIsValidSession)
	{
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SessionResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::IsValidSession(Z_Param_Out_SessionResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionSearchProperty)
	{
		P_GET_STRUCT(FSessionPropertyKeyPair,Z_Param_SessionSearchProperty);
		P_GET_ENUM(EOnlineComparisonOpRedux,Z_Param_ComparisonOp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionsSearchSetting*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(Z_Param_SessionSearchProperty,EOnlineComparisonOpRedux(Z_Param_ComparisonOp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execIsPlayerInSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_PlayerToCheck);
		P_GET_UBOOL_REF(Z_Param_Out_bIsInSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::IsPlayerInSession(Z_Param_WorldContextObject,Z_Param_Out_PlayerToCheck,Z_Param_Out_bIsInSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionSettings)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumConnections);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumPrivateConnections);
		P_GET_UBOOL_REF(Z_Param_Out_bIsLAN);
		P_GET_UBOOL_REF(Z_Param_Out_bIsDedicated);
		P_GET_UBOOL_REF(Z_Param_Out_bAllowInvites);
		P_GET_UBOOL_REF(Z_Param_Out_bAllowJoinInProgress);
		P_GET_UBOOL_REF(Z_Param_Out_bIsAnticheatEnabled);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BuildUniqueID);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionSettings(Z_Param_WorldContextObject,Z_Param_Out_NumConnections,Z_Param_Out_NumPrivateConnections,Z_Param_Out_bIsLAN,Z_Param_Out_bIsDedicated,Z_Param_Out_bAllowInvites,Z_Param_Out_bAllowJoinInProgress,Z_Param_Out_bIsAnticheatEnabled,Z_Param_Out_BuildUniqueID,Z_Param_Out_ExtraSettings,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM_REF(EBPOnlineSessionState,Z_Param_Out_SessionState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionState(Z_Param_WorldContextObject,(EBPOnlineSessionState&)(Z_Param_Out_SessionState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetExtraSettings)
	{
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetExtraSettings(Z_Param_SessionResult,Z_Param_Out_ExtraSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execAddOrModifyExtraSettings)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_SettingsArray);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_NewOrChangedSettings);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ModifiedSettingsArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::AddOrModifyExtraSettings(Z_Param_Out_SettingsArray,Z_Param_Out_NewOrChangedSettings,Z_Param_Out_ModifiedSettingsArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execBanPlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerToBan);
		P_GET_PROPERTY(FTextProperty,Z_Param_BanReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::BanPlayer(Z_Param_WorldContextObject,Z_Param_PlayerToBan,Z_Param_BanReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execKickPlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerToKick);
		P_GET_PROPERTY(FTextProperty,Z_Param_KickReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::KickPlayer(Z_Param_WorldContextObject,Z_Param_PlayerToKick,Z_Param_KickReason);
		P_NATIVE_END;
	}
	void UAdvancedSessionsLibrary::StaticRegisterNativesUAdvancedSessionsLibrary()
	{
		UClass* Class = UAdvancedSessionsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrModifyExtraSettings", &UAdvancedSessionsLibrary::execAddOrModifyExtraSettings },
			{ "BanPlayer", &UAdvancedSessionsLibrary::execBanPlayer },
			{ "EqualEqual_UNetIDUnetID", &UAdvancedSessionsLibrary::execEqualEqual_UNetIDUnetID },
			{ "FindSessionPropertyByName", &UAdvancedSessionsLibrary::execFindSessionPropertyByName },
			{ "FindSessionPropertyIndexByName", &UAdvancedSessionsLibrary::execFindSessionPropertyIndexByName },
			{ "GetCurrentSessionID_AsString", &UAdvancedSessionsLibrary::execGetCurrentSessionID_AsString },
			{ "GetCurrentUniqueBuildID", &UAdvancedSessionsLibrary::execGetCurrentUniqueBuildID },
			{ "GetExtraSettings", &UAdvancedSessionsLibrary::execGetExtraSettings },
			{ "GetNetPlayerIndex", &UAdvancedSessionsLibrary::execGetNetPlayerIndex },
			{ "GetNumberOfNetworkPlayers", &UAdvancedSessionsLibrary::execGetNumberOfNetworkPlayers },
			{ "GetPlayerName", &UAdvancedSessionsLibrary::execGetPlayerName },
			{ "GetSessionID_AsString", &UAdvancedSessionsLibrary::execGetSessionID_AsString },
			{ "GetSessionPropertyBool", &UAdvancedSessionsLibrary::execGetSessionPropertyBool },
			{ "GetSessionPropertyByte", &UAdvancedSessionsLibrary::execGetSessionPropertyByte },
			{ "GetSessionPropertyFloat", &UAdvancedSessionsLibrary::execGetSessionPropertyFloat },
			{ "GetSessionPropertyInt", &UAdvancedSessionsLibrary::execGetSessionPropertyInt },
			{ "GetSessionPropertyKey", &UAdvancedSessionsLibrary::execGetSessionPropertyKey },
			{ "GetSessionPropertyString", &UAdvancedSessionsLibrary::execGetSessionPropertyString },
			{ "GetSessionSettings", &UAdvancedSessionsLibrary::execGetSessionSettings },
			{ "GetSessionState", &UAdvancedSessionsLibrary::execGetSessionState },
			{ "GetUniqueBuildID", &UAdvancedSessionsLibrary::execGetUniqueBuildID },
			{ "GetUniqueNetID", &UAdvancedSessionsLibrary::execGetUniqueNetID },
			{ "GetUniqueNetIDFromPlayerState", &UAdvancedSessionsLibrary::execGetUniqueNetIDFromPlayerState },
			{ "HasOnlineSubsystem", &UAdvancedSessionsLibrary::execHasOnlineSubsystem },
			{ "IsPlayerInSession", &UAdvancedSessionsLibrary::execIsPlayerInSession },
			{ "IsValidSession", &UAdvancedSessionsLibrary::execIsValidSession },
			{ "IsValidUniqueNetID", &UAdvancedSessionsLibrary::execIsValidUniqueNetID },
			{ "KickPlayer", &UAdvancedSessionsLibrary::execKickPlayer },
			{ "MakeLiteralSessionPropertyBool", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyBool },
			{ "MakeLiteralSessionPropertyByte", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyByte },
			{ "MakeLiteralSessionPropertyFloat", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyFloat },
			{ "MakeLiteralSessionPropertyInt", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyInt },
			{ "MakeLiteralSessionPropertyString", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyString },
			{ "MakeLiteralSessionSearchProperty", &UAdvancedSessionsLibrary::execMakeLiteralSessionSearchProperty },
			{ "ServerTravel", &UAdvancedSessionsLibrary::execServerTravel },
			{ "SetPlayerName", &UAdvancedSessionsLibrary::execSetPlayerName },
			{ "UniqueNetIdToString", &UAdvancedSessionsLibrary::execUniqueNetIdToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics
	{
		struct AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms
		{
			TArray<FSessionPropertyKeyPair> SettingsArray;
			TArray<FSessionPropertyKeyPair> NewOrChangedSettings;
			TArray<FSessionPropertyKeyPair> ModifiedSettingsArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SettingsArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewOrChangedSettings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewOrChangedSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedSettingsArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedSettingsArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_SettingsArray_Inner = { "SettingsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_SettingsArray = { "SettingsArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms, SettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_NewOrChangedSettings_Inner = { "NewOrChangedSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_NewOrChangedSettings = { "NewOrChangedSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms, NewOrChangedSettings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_ModifiedSettingsArray_Inner = { "ModifiedSettingsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_ModifiedSettingsArray = { "ModifiedSettingsArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms, ModifiedSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_SettingsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_SettingsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_NewOrChangedSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_NewOrChangedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_ModifiedSettingsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_ModifiedSettingsArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or modifies session settings in an existing array depending on if they exist already or not\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or modifies session settings in an existing array depending on if they exist already or not" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "AddOrModifyExtraSettings", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics
	{
		struct AdvancedSessionsLibrary_eventBanPlayer_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerToBan;
			FText BanReason;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerToBan;
		static const UECodeGen_Private::FTextPropertyParams NewProp_BanReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventBanPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_PlayerToBan = { "PlayerToBan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventBanPlayer_Parms, PlayerToBan), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_BanReason = { "BanReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventBanPlayer_Parms, BanReason), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventBanPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventBanPlayer_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_PlayerToBan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_BanReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ban a player from the currently active game session, only available on the server\n// Note that the default gamesession class does not implement an actual ban list and just kicks when this is called\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ban a player from the currently active game session, only available on the server\nNote that the default gamesession class does not implement an actual ban list and just kicks when this is called" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "BanPlayer", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::AdvancedSessionsLibrary_eventBanPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::AdvancedSessionsLibrary_eventBanPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics
	{
		struct AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms
		{
			FBPUniqueNetId A;
			FBPUniqueNetId B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms, A), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A_MetaData) }; // 740343174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms, B), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B_MetaData) }; // 740343174
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns true if the values are equal (A == B) */" },
#endif
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal Unique Net ID" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "EqualEqual_UNetIDUnetID", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics
	{
		struct AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingsName;
			EBlueprintResultSwitch Result;
			FSessionPropertyKeyPair OutProperty;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingsName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_MetaData) }; // 1351564640
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_SettingsName = { "SettingsName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms, SettingsName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(0, nullptr) }; // 3142505353
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_OutProperty = { "OutProperty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms, OutProperty), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_SettingsName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_OutProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Find session property by Name\n" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find session property by Name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "FindSessionPropertyByName", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics
	{
		struct AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			EBlueprintResultSwitch Result;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_MetaData) }; // 1351564640
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms, SettingName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(0, nullptr) }; // 3142505353
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_SettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Find session property index by Name\n" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find session property index by Name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "FindSessionPropertyIndexByName", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics
	{
		struct AdvancedSessionsLibrary_eventGetCurrentSessionID_AsString_Parms
		{
			UObject* WorldContextObject;
			FString SessionID;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetCurrentSessionID_AsString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetCurrentSessionID_AsString_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::NewProp_SessionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a string copy of the current session ID\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a string copy of the current session ID" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetCurrentSessionID_AsString", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::AdvancedSessionsLibrary_eventGetCurrentSessionID_AsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::AdvancedSessionsLibrary_eventGetCurrentSessionID_AsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics
	{
		struct AdvancedSessionsLibrary_eventGetCurrentUniqueBuildID_Parms
		{
			int32 UniqueBuildId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniqueBuildId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::NewProp_UniqueBuildId = { "UniqueBuildId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetCurrentUniqueBuildID_Parms, UniqueBuildId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::NewProp_UniqueBuildId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the Unique Current Build ID\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Unique Current Build ID" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetCurrentUniqueBuildID", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::AdvancedSessionsLibrary_eventGetCurrentUniqueBuildID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::AdvancedSessionsLibrary_eventGetCurrentUniqueBuildID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics
	{
		struct AdvancedSessionsLibrary_eventGetExtraSettings_Parms
		{
			FBlueprintSessionResult SessionResult;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetExtraSettings_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 3738885261
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetExtraSettings_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_SessionResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_ExtraSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get an array of the session settings from a session search result\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an array of the session settings from a session search result" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetExtraSettings", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::AdvancedSessionsLibrary_eventGetExtraSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::AdvancedSessionsLibrary_eventGetExtraSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics
	{
		struct AdvancedSessionsLibrary_eventGetNetPlayerIndex_Parms
		{
			APlayerController* PlayerController;
			int32 NetPlayerIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NetPlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetNetPlayerIndex_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::NewProp_NetPlayerIndex = { "NetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetNetPlayerIndex_Parms, NetPlayerIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::NewProp_NetPlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the network player index of the given controller\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the network player index of the given controller" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetNetPlayerIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::AdvancedSessionsLibrary_eventGetNetPlayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::AdvancedSessionsLibrary_eventGetNetPlayerIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics
	{
		struct AdvancedSessionsLibrary_eventGetNumberOfNetworkPlayers_Parms
		{
			UObject* WorldContextObject;
			int32 NumNetPlayers;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumNetPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetNumberOfNetworkPlayers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::NewProp_NumNetPlayers = { "NumNetPlayers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetNumberOfNetworkPlayers_Parms, NumNetPlayers), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::NewProp_NumNetPlayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "Online|AdvancedSessions|PlayerInfo|Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the number of network players\n" },
#endif
		{ "DisplayName", "GetNumNetworkPlayers" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of network players" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetNumberOfNetworkPlayers", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::AdvancedSessionsLibrary_eventGetNumberOfNetworkPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::AdvancedSessionsLibrary_eventGetNumberOfNetworkPlayers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics
	{
		struct AdvancedSessionsLibrary_eventGetPlayerName_Parms
		{
			APlayerController* PlayerController;
			FString PlayerName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetPlayerName_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetPlayerName_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::NewProp_PlayerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerName" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the player name of a network player attached to the given controller\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the player name of a network player attached to the given controller" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetPlayerName", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::AdvancedSessionsLibrary_eventGetPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::AdvancedSessionsLibrary_eventGetPlayerName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionID_AsString_Parms
		{
			FBlueprintSessionResult SessionResult;
			FString SessionID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionID_AsString_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult_MetaData) }; // 3738885261
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionID_AsString_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a string copy of a session ID\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a string copy of a session ID" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionID_AsString", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::AdvancedSessionsLibrary_eventGetSessionID_AsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::AdvancedSessionsLibrary_eventGetSessionID_AsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			bool SettingValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static void NewProp_SettingValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SettingValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_MetaData) }; // 1351564640
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms, SettingName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(0, nullptr) }; // 1618835047
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms*)Obj)->SettingValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SearchResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SearchResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get session custom information key/value as Bool\n// Steam only currently supports Int,Float,String,BYTE values for search filtering!!!\n" },
#endif
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get session custom information key/value as Bool\nSteam only currently supports Int,Float,String,BYTE values for search filtering!!!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyBool", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			uint8 SettingValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SettingValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_MetaData) }; // 1351564640
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms, SettingName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(0, nullptr) }; // 1618835047
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms, SettingValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SearchResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SearchResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SettingValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get session custom information key/value as Byte (For Enums)\n" },
#endif
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get session custom information key/value as Byte (For Enums)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyByte", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			float SettingValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SettingValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_MetaData) }; // 1351564640
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms, SettingName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(0, nullptr) }; // 1618835047
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms, SettingValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SearchResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SearchResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SettingValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get session custom information key/value as Float\n" },
#endif
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get session custom information key/value as Float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyFloat", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			int32 SettingValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SettingValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_MetaData) }; // 1351564640
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms, SettingName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(0, nullptr) }; // 1618835047
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms, SettingValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SearchResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SearchResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SettingValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get session custom information key/value as Int\n" },
#endif
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get session custom information key/value as Int" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyInt", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyKey_Parms
		{
			FSessionPropertyKeyPair SessionProperty;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionProperty;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty = { "SessionProperty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyKey_Parms, SessionProperty), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty_MetaData) }; // 1351564640
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get session property Key Name value\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get session property Key Name value" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyKey", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			FString SettingValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SettingValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_MetaData) }; // 1351564640
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms, SettingName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(0, nullptr) }; // 1618835047
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms, SettingValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SearchResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SearchResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SettingValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get session custom information key/value as String\n" },
#endif
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get session custom information key/value as String" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyString", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionSettings_Parms
		{
			UObject* WorldContextObject;
			int32 NumConnections;
			int32 NumPrivateConnections;
			bool bIsLAN;
			bool bIsDedicated;
			bool bAllowInvites;
			bool bAllowJoinInProgress;
			bool bIsAnticheatEnabled;
			int32 BuildUniqueID;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			EBlueprintResultSwitch Result;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumConnections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPrivateConnections;
		static void NewProp_bIsLAN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLAN;
		static void NewProp_bIsDedicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicated;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
		static void NewProp_bIsAnticheatEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAnticheatEnabled;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BuildUniqueID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_NumConnections = { "NumConnections", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, NumConnections), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_NumPrivateConnections = { "NumPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, NumPrivateConnections), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsLAN_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bIsLAN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsLAN = { "bIsLAN", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsLAN_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsDedicated_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bIsDedicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsDedicated = { "bIsDedicated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsDedicated_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bAllowJoinInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsAnticheatEnabled_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bIsAnticheatEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsAnticheatEnabled = { "bIsAnticheatEnabled", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsAnticheatEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_BuildUniqueID = { "BuildUniqueID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, BuildUniqueID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(0, nullptr) }; // 3142505353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_NumConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_NumPrivateConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsLAN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsDedicated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsAnticheatEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_BuildUniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the current session settings\n" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current session settings" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionSettings", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::AdvancedSessionsLibrary_eventGetSessionSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::AdvancedSessionsLibrary_eventGetSessionSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionState_Parms
		{
			UObject* WorldContextObject;
			EBPOnlineSessionState SessionState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_SessionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_SessionState = { "SessionState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionState_Parms, SessionState), Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState, METADATA_PARAMS(0, nullptr) }; // 974564090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_SessionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_SessionState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the current session state\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current session state" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionState", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::AdvancedSessionsLibrary_eventGetSessionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::AdvancedSessionsLibrary_eventGetSessionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics
	{
		struct AdvancedSessionsLibrary_eventGetUniqueBuildID_Parms
		{
			FBlueprintSessionResult SessionResult;
			int32 UniqueBuildId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniqueBuildId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueBuildID_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 3738885261
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::NewProp_UniqueBuildId = { "UniqueBuildId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueBuildID_Parms, UniqueBuildId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::NewProp_SessionResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::NewProp_UniqueBuildId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the Unique Build ID from a session search result\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Unique Build ID from a session search result" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetUniqueBuildID", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::AdvancedSessionsLibrary_eventGetUniqueBuildID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::AdvancedSessionsLibrary_eventGetUniqueBuildID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics
	{
		struct AdvancedSessionsLibrary_eventGetUniqueNetID_Parms
		{
			APlayerController* PlayerController;
			FBPUniqueNetId UniqueNetId;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueNetID_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueNetID_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::NewProp_UniqueNetId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the unique net id of a network player attached to the given controller\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the unique net id of a network player attached to the given controller" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetUniqueNetID", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::AdvancedSessionsLibrary_eventGetUniqueNetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::AdvancedSessionsLibrary_eventGetUniqueNetID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics
	{
		struct AdvancedSessionsLibrary_eventGetUniqueNetIDFromPlayerState_Parms
		{
			APlayerState* PlayerState;
			FBPUniqueNetId UniqueNetId;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueNetIDFromPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueNetIDFromPlayerState_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::NewProp_UniqueNetId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the unique net id of a network player who is assigned the the given player state\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the unique net id of a network player who is assigned the the given player state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetUniqueNetIDFromPlayerState", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::AdvancedSessionsLibrary_eventGetUniqueNetIDFromPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::AdvancedSessionsLibrary_eventGetUniqueNetIDFromPlayerState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics
	{
		struct AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms
		{
			FName SubSystemName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubSystemName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_SubSystemName = { "SubSystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms, SubSystemName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_SubSystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks if the stated session subsystem is active\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the stated session subsystem is active" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "HasOnlineSubsystem", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics
	{
		struct AdvancedSessionsLibrary_eventIsPlayerInSession_Parms
		{
			UObject* WorldContextObject;
			FBPUniqueNetId PlayerToCheck;
			bool bIsInSession;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerToCheck;
		static void NewProp_bIsInSession_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInSession;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventIsPlayerInSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck = { "PlayerToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventIsPlayerInSession_Parms, PlayerToCheck), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck_MetaData) }; // 740343174
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_bIsInSession_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventIsPlayerInSession_Parms*)Obj)->bIsInSession = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_bIsInSession = { "bIsInSession", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventIsPlayerInSession_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_bIsInSession_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_bIsInSession,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if someone is in the current session\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if someone is in the current session" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "IsPlayerInSession", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::AdvancedSessionsLibrary_eventIsPlayerInSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::AdvancedSessionsLibrary_eventIsPlayerInSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics
	{
		struct AdvancedSessionsLibrary_eventIsValidSession_Parms
		{
			FBlueprintSessionResult SessionResult;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventIsValidSession_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult_MetaData) }; // 3738885261
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventIsValidSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventIsValidSession_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if a session result is valid or not\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a session result is valid or not" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "IsValidSession", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::AdvancedSessionsLibrary_eventIsValidSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::AdvancedSessionsLibrary_eventIsValidSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics
	{
		struct AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId_MetaData) }; // 740343174
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return True if Unique Net ID is valid\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return True if Unique Net ID is valid" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "IsValidUniqueNetID", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics
	{
		struct AdvancedSessionsLibrary_eventKickPlayer_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerToKick;
			FText KickReason;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerToKick;
		static const UECodeGen_Private::FTextPropertyParams NewProp_KickReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventKickPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_PlayerToKick = { "PlayerToKick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventKickPlayer_Parms, PlayerToKick), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_KickReason = { "KickReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventKickPlayer_Parms, KickReason), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventKickPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventKickPlayer_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_PlayerToKick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_KickReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Kick a player from the currently active game session, only available on the server\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kick a player from the currently active game session, only available on the server" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "KickPlayer", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::AdvancedSessionsLibrary_eventKickPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::AdvancedSessionsLibrary_eventKickPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms
		{
			FName Key;
			bool Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms, Key), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make a literal session custom information key/value pair from Bool\n// Steam only currently supports Int,Float,String,BYTE values for search filtering!\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a literal session custom information key/value pair from Bool\nSteam only currently supports Int,Float,String,BYTE values for search filtering!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyBool", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms
		{
			FName Key;
			uint8 Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make a literal session custom information key/value pair from Byte (For Enums)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a literal session custom information key/value pair from Byte (For Enums)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyByte", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms
		{
			FName Key;
			float Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make a literal session custom information key/value pair from Float\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a literal session custom information key/value pair from Float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyFloat", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms
		{
			FName Key;
			int32 Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make a literal session custom information key/value pair from Int\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a literal session custom information key/value pair from Int" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyInt", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms
		{
			FName Key;
			FString Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make a literal session custom information key/value pair from String\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a literal session custom information key/value pair from String" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyString", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms
		{
			FSessionPropertyKeyPair SessionSearchProperty;
			EOnlineComparisonOpRedux ComparisonOp;
			FSessionsSearchSetting ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSearchProperty;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonOp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonOp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_SessionSearchProperty = { "SessionSearchProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms, SessionSearchProperty), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ComparisonOp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ComparisonOp = { "ComparisonOp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms, ComparisonOp), Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux, METADATA_PARAMS(0, nullptr) }; // 342661541
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(0, nullptr) }; // 1046831353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_SessionSearchProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ComparisonOp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ComparisonOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make a literal session search parameter\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a literal session search parameter" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionSearchProperty", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics
	{
		struct AdvancedSessionsLibrary_eventServerTravel_Parms
		{
			UObject* WorldContextObject;
			FString InURL;
			bool bAbsolute;
			bool bShouldSkipGameNotify;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InURL;
		static void NewProp_bAbsolute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
		static void NewProp_bShouldSkipGameNotify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSkipGameNotify;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventServerTravel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_InURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_InURL = { "InURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventServerTravel_Parms, InURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_InURL_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_InURL_MetaData) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_bAbsolute_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventServerTravel_Parms*)Obj)->bAbsolute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventServerTravel_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_bShouldSkipGameNotify_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventServerTravel_Parms*)Obj)->bShouldSkipGameNotify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_bShouldSkipGameNotify = { "bShouldSkipGameNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventServerTravel_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_bShouldSkipGameNotify_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventServerTravel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventServerTravel_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_InURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_bAbsolute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_bShouldSkipGameNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|Seamless" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Exposes Server travel to blueprint\n" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposes Server travel to blueprint" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "ServerTravel", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::AdvancedSessionsLibrary_eventServerTravel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::AdvancedSessionsLibrary_eventServerTravel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics
	{
		struct AdvancedSessionsLibrary_eventSetPlayerName_Parms
		{
			APlayerController* PlayerController;
			FString PlayerName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventSetPlayerName_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventSetPlayerName_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::NewProp_PlayerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerName" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the player name of a network player attached to the given controller\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the player name of a network player attached to the given controller" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "SetPlayerName", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::AdvancedSessionsLibrary_eventSetPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::AdvancedSessionsLibrary_eventSetPlayerName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics
	{
		struct AdvancedSessionsLibrary_eventUniqueNetIdToString_Parms
		{
			FBPUniqueNetId UniqueNetId;
			FString String;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventUniqueNetIdToString_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId_MetaData), Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId_MetaData) }; // 740343174
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventUniqueNetIdToString_Parms, String), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|UniqueNetId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if a UniqueNetId is a friend\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a UniqueNetId is a friend" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "UniqueNetIdToString", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::AdvancedSessionsLibrary_eventUniqueNetIdToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::AdvancedSessionsLibrary_eventUniqueNetIdToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedSessionsLibrary);
	UClass* Z_Construct_UClass_UAdvancedSessionsLibrary_NoRegister()
	{
		return UAdvancedSessionsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedSessionsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings, "AddOrModifyExtraSettings" }, // 1547857935
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer, "BanPlayer" }, // 1004010827
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID, "EqualEqual_UNetIDUnetID" }, // 2422709722
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName, "FindSessionPropertyByName" }, // 977166916
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName, "FindSessionPropertyIndexByName" }, // 489369009
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString, "GetCurrentSessionID_AsString" }, // 139799230
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID, "GetCurrentUniqueBuildID" }, // 4092705125
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings, "GetExtraSettings" }, // 2958973225
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex, "GetNetPlayerIndex" }, // 3799232055
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers, "GetNumberOfNetworkPlayers" }, // 3788507302
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName, "GetPlayerName" }, // 578509464
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString, "GetSessionID_AsString" }, // 868327680
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool, "GetSessionPropertyBool" }, // 3066222988
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte, "GetSessionPropertyByte" }, // 982062549
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat, "GetSessionPropertyFloat" }, // 2463656085
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt, "GetSessionPropertyInt" }, // 3704759454
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey, "GetSessionPropertyKey" }, // 489382857
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString, "GetSessionPropertyString" }, // 2476311864
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings, "GetSessionSettings" }, // 2085372763
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState, "GetSessionState" }, // 2477760665
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID, "GetUniqueBuildID" }, // 2916283739
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID, "GetUniqueNetID" }, // 753296768
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState, "GetUniqueNetIDFromPlayerState" }, // 2473479466
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem, "HasOnlineSubsystem" }, // 2311498488
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession, "IsPlayerInSession" }, // 1643875954
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession, "IsValidSession" }, // 2903428026
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID, "IsValidUniqueNetID" }, // 2773566860
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer, "KickPlayer" }, // 68412687
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool, "MakeLiteralSessionPropertyBool" }, // 1738520827
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte, "MakeLiteralSessionPropertyByte" }, // 2366810019
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat, "MakeLiteralSessionPropertyFloat" }, // 3215410548
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt, "MakeLiteralSessionPropertyInt" }, // 1526369824
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString, "MakeLiteralSessionPropertyString" }, // 1535608099
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty, "MakeLiteralSessionSearchProperty" }, // 4194907298
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_ServerTravel, "ServerTravel" }, // 2065459211
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName, "SetPlayerName" }, // 3282965904
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString, "UniqueNetIdToString" }, // 4131433870
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedSessionsLibrary.h" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedSessionsLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::ClassParams = {
		&UAdvancedSessionsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAdvancedSessionsLibrary()
	{
		if (!Z_Registration_Info_UClass_UAdvancedSessionsLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedSessionsLibrary.OuterSingleton, Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdvancedSessionsLibrary.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedSessionsLibrary>()
	{
		return UAdvancedSessionsLibrary::StaticClass();
	}
	UAdvancedSessionsLibrary::UAdvancedSessionsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedSessionsLibrary);
	UAdvancedSessionsLibrary::~UAdvancedSessionsLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedSessionsLibrary, UAdvancedSessionsLibrary::StaticClass, TEXT("UAdvancedSessionsLibrary"), &Z_Registration_Info_UClass_UAdvancedSessionsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedSessionsLibrary), 188755436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_3070536840(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
