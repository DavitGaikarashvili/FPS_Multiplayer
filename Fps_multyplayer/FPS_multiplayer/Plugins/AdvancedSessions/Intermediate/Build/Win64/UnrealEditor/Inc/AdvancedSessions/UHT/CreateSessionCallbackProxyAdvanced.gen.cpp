// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/CreateSessionCallbackProxyAdvanced.h"
#include "AdvancedSessions/Classes/BlueprintDataDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateSessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	DEFINE_FUNCTION(UCreateSessionCallbackProxyAdvanced::execCreateAdvancedSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FIntProperty,Z_Param_PublicConnections);
		P_GET_PROPERTY(FIntProperty,Z_Param_PrivateConnections);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_GET_UBOOL(Z_Param_bAllowInvites);
		P_GET_UBOOL(Z_Param_bIsDedicatedServer);
		P_GET_UBOOL(Z_Param_bUsePresence);
		P_GET_UBOOL(Z_Param_bUseLobbiesIfAvailable);
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresence);
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresenceFriendsOnly);
		P_GET_UBOOL(Z_Param_bAntiCheatProtected);
		P_GET_UBOOL(Z_Param_bUsesStats);
		P_GET_UBOOL(Z_Param_bShouldAdvertise);
		P_GET_UBOOL(Z_Param_bUseLobbiesVoiceChatIfAvailable);
		P_GET_UBOOL(Z_Param_bStartAfterCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCreateSessionCallbackProxyAdvanced**)Z_Param__Result=UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(Z_Param_WorldContextObject,Z_Param_Out_ExtraSettings,Z_Param_PlayerController,Z_Param_PublicConnections,Z_Param_PrivateConnections,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bIsDedicatedServer,Z_Param_bUsePresence,Z_Param_bUseLobbiesIfAvailable,Z_Param_bAllowJoinViaPresence,Z_Param_bAllowJoinViaPresenceFriendsOnly,Z_Param_bAntiCheatProtected,Z_Param_bUsesStats,Z_Param_bShouldAdvertise,Z_Param_bUseLobbiesVoiceChatIfAvailable,Z_Param_bStartAfterCreate);
		P_NATIVE_END;
	}
	void UCreateSessionCallbackProxyAdvanced::StaticRegisterNativesUCreateSessionCallbackProxyAdvanced()
	{
		UClass* Class = UCreateSessionCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAdvancedSession", &UCreateSessionCallbackProxyAdvanced::execCreateAdvancedSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics
	{
		struct CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms
		{
			UObject* WorldContextObject;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			APlayerController* PlayerController;
			int32 PublicConnections;
			int32 PrivateConnections;
			bool bUseLAN;
			bool bAllowInvites;
			bool bIsDedicatedServer;
			bool bUsePresence;
			bool bUseLobbiesIfAvailable;
			bool bAllowJoinViaPresence;
			bool bAllowJoinViaPresenceFriendsOnly;
			bool bAntiCheatProtected;
			bool bUsesStats;
			bool bShouldAdvertise;
			bool bUseLobbiesVoiceChatIfAvailable;
			bool bStartAfterCreate;
			UCreateSessionCallbackProxyAdvanced* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PublicConnections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrivateConnections;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
		static void NewProp_bUsePresence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
		static void NewProp_bUseLobbiesIfAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesIfAvailable;
		static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
		static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
		static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
		static void NewProp_bUsesStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesStats;
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
		static void NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesVoiceChatIfAvailable;
		static void NewProp_bStartAfterCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAfterCreate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_MetaData), Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_MetaData) }; // 1351564640
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PublicConnections = { "PublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, PublicConnections), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PrivateConnections = { "PrivateConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, PrivateConnections), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUseLAN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bIsDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsePresence_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUsePresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLobbiesIfAvailable_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUseLobbiesIfAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLobbiesIfAvailable = { "bUseLobbiesIfAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLobbiesIfAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAllowJoinViaPresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAntiCheatProtected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsesStats_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUsesStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bShouldAdvertise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUseLobbiesVoiceChatIfAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable = { "bUseLobbiesVoiceChatIfAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bStartAfterCreate_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bStartAfterCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bStartAfterCreate = { "bStartAfterCreate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bStartAfterCreate_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, ReturnValue), Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PrivateConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLAN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bIsDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsePresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLobbiesIfAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAntiCheatProtected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsesStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bShouldAdvertise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bStartAfterCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ExtraSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *    Creates a session with the default online subsystem with advanced optional inputs, for dedicated servers leave UsePresence as false and set IsDedicatedServer to true. Dedicated servers don't use presence.\n\x09 *    @param PublicConnections\x09When doing a 'listen' server, this must be >=2 (ListenServer itself counts as a connection)\n\x09 *    @param bUseLAN\x09\x09\x09When you want to play LAN, the level to play on must be loaded with option 'bIsLanMatch'\n\x09 *    @param bUsePresence\x09\x09Must be true for a 'listen' server (Map must be loaded with option 'listen'), false for a 'dedicated' server.\n\x09 *\x09  @param bUseLobbiesIfAvailable Used to flag the subsystem to use a lobby api instead of general hosting if the API supports it, generally true on steam for listen servers and false for dedicated\n\x09 *\x09  @param bShouldAdvertise\x09Set to true when the OnlineSubsystem should list your server when someone is searching for servers. Otherwise the server is hidden and only join via invite is possible.\n\x09 *\x09  @param bUseLobbiesVoiceChatIfAvailable Set to true to setup voice chat lobbies if the API supports it\n\x09 * \x09  @param bStartAfterCreate Set to true to start the session after it's created. If false you need to manually call StartSession when ready.\n\x09 */" },
#endif
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinViaPresence", "true" },
		{ "CPP_Default_bAllowJoinViaPresenceFriendsOnly", "false" },
		{ "CPP_Default_bAntiCheatProtected", "false" },
		{ "CPP_Default_bIsDedicatedServer", "false" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bStartAfterCreate", "true" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_bUseLobbiesIfAvailable", "true" },
		{ "CPP_Default_bUseLobbiesVoiceChatIfAvailable", "false" },
		{ "CPP_Default_bUsePresence", "true" },
		{ "CPP_Default_bUsesStats", "false" },
		{ "CPP_Default_PlayerController", "None" },
		{ "CPP_Default_PrivateConnections", "0" },
		{ "CPP_Default_PublicConnections", "100" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a session with the default online subsystem with advanced optional inputs, for dedicated servers leave UsePresence as false and set IsDedicatedServer to true. Dedicated servers don't use presence.\n@param PublicConnections  When doing a 'listen' server, this must be >=2 (ListenServer itself counts as a connection)\n@param bUseLAN                    When you want to play LAN, the level to play on must be loaded with option 'bIsLanMatch'\n@param bUsePresence               Must be true for a 'listen' server (Map must be loaded with option 'listen'), false for a 'dedicated' server.\n    @param bUseLobbiesIfAvailable Used to flag the subsystem to use a lobby api instead of general hosting if the API supports it, generally true on steam for listen servers and false for dedicated\n    @param bShouldAdvertise       Set to true when the OnlineSubsystem should list your server when someone is searching for servers. Otherwise the server is hidden and only join via invite is possible.\n    @param bUseLobbiesVoiceChatIfAvailable Set to true to setup voice chat lobbies if the API supports it\n    @param bStartAfterCreate Set to true to start the session after it's created. If false you need to manually call StartSession when ready." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced, nullptr, "CreateAdvancedSession", nullptr, nullptr, Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateSessionCallbackProxyAdvanced);
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister()
	{
		return UCreateSessionCallbackProxyAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession, "CreateAdvancedSession" }, // 4029645825
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreateSessionCallbackProxyAdvanced.h" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the session was created successfully\n" },
#endif
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the session was created successfully" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreateSessionCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData) }; // 747690002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there was an error creating the session\n" },
#endif
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there was an error creating the session" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreateSessionCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData), Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData) }; // 747690002
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateSessionCallbackProxyAdvanced>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::ClassParams = {
		&UCreateSessionCallbackProxyAdvanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams), Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced()
	{
		if (!Z_Registration_Info_UClass_UCreateSessionCallbackProxyAdvanced.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateSessionCallbackProxyAdvanced.OuterSingleton, Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateSessionCallbackProxyAdvanced.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UCreateSessionCallbackProxyAdvanced>()
	{
		return UCreateSessionCallbackProxyAdvanced::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateSessionCallbackProxyAdvanced);
	UCreateSessionCallbackProxyAdvanced::~UCreateSessionCallbackProxyAdvanced() {}
	struct Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced, UCreateSessionCallbackProxyAdvanced::StaticClass, TEXT("UCreateSessionCallbackProxyAdvanced"), &Z_Registration_Info_UClass_UCreateSessionCallbackProxyAdvanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateSessionCallbackProxyAdvanced), 2194108830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_2318403924(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
