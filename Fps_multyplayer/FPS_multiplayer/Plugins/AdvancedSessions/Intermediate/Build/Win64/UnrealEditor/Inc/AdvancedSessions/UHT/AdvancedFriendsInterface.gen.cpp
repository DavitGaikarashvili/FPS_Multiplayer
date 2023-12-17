// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedFriendsInterface.h"
#include "AdvancedSessions/Classes/BlueprintDataDefinitions.h"
#include "FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFriendsInterface() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsInterface();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsInterface_NoRegister();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	struct AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms
	{
		int32 PlayerNum;
	};
	struct AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms
	{
		EBPLoginStatus PreviousStatus;
		EBPLoginStatus NewStatus;
		FBPUniqueNetId PlayerUniqueNetID;
	};
	struct AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms
	{
		FBPUniqueNetId PlayerId;
		bool bIsTalking;
	};
	struct AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms
	{
		FBPUniqueNetId PersonInvited;
		FBlueprintSessionResult SearchResult;
	};
	struct AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms
	{
		FBPUniqueNetId PersonInviting;
		FBlueprintSessionResult SearchResult;
	};
	void IAdvancedFriendsInterface::OnPlayerLoginChanged(int32 PlayerNum)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerLoginChanged instead.");
	}
	void IAdvancedFriendsInterface::OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerLoginStatusChanged instead.");
	}
	void IAdvancedFriendsInterface::OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerVoiceStateChanged instead.");
	}
	void IAdvancedFriendsInterface::OnSessionInviteAccepted(FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SearchResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionInviteAccepted instead.");
	}
	void IAdvancedFriendsInterface::OnSessionInviteReceived(FBPUniqueNetId PersonInviting, FBlueprintSessionResult const& SearchResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionInviteReceived instead.");
	}
	void UAdvancedFriendsInterface::StaticRegisterNativesUAdvancedFriendsInterface()
	{
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::NewProp_PlayerNum = { "PlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms, PlayerNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::NewProp_PlayerNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the designated LocalUser has changed login state\n" },
#endif
		{ "DisplayName", "OnPlayerLoginChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the designated LocalUser has changed login state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnPlayerLoginChanged", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::PropPointers), sizeof(AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousStatus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerUniqueNetID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus = { "PreviousStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms, PreviousStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(0, nullptr) }; // 2728875483
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms, NewStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(0, nullptr) }; // 2728875483
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PlayerUniqueNetID = { "PlayerUniqueNetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms, PlayerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PlayerUniqueNetID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the designated LocalUser has changed login state\n" },
#endif
		{ "DisplayName", "OnPlayerLoginStatusChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the designated LocalUser has changed login state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnPlayerLoginStatusChanged", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::PropPointers), sizeof(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static void NewProp_bIsTalking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTalking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms, PlayerId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
	void Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_bIsTalking_SetBit(void* Obj)
	{
		((AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms*)Obj)->bIsTalking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_bIsTalking = { "bIsTalking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms), &Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_bIsTalking_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_bIsTalking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect\n" },
#endif
		{ "DisplayName", "OnPlayerVoiceStateChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnPlayerVoiceStateChanged", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::PropPointers), sizeof(AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PersonInvited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_PersonInvited = { "PersonInvited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms, PersonInvited), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms, SearchResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult_MetaData), Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult_MetaData) }; // 3738885261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_PersonInvited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect\n" },
#endif
		{ "DisplayName", "OnSessionInviteAccepted" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnSessionInviteAccepted", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::PropPointers), sizeof(AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PersonInviting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_PersonInviting = { "PersonInviting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms, PersonInviting), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms, SearchResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult_MetaData), Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult_MetaData) }; // 3738885261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_PersonInviting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect\n" },
#endif
		{ "DisplayName", "OnSessionInviteReceived" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnSessionInviteReceived", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::PropPointers), sizeof(AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedFriendsInterface);
	UClass* Z_Construct_UClass_UAdvancedFriendsInterface_NoRegister()
	{
		return UAdvancedFriendsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedFriendsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedFriendsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedFriendsInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged, "OnPlayerLoginChanged" }, // 4060447330
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged, "OnPlayerLoginStatusChanged" }, // 1517476264
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged, "OnPlayerVoiceStateChanged" }, // 2414971962
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted, "OnSessionInviteAccepted" }, // 3099004780
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived, "OnSessionInviteReceived" }, // 2530209997
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedFriendsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAdvancedFriendsInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedFriendsInterface_Statics::ClassParams = {
		&UAdvancedFriendsInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedFriendsInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAdvancedFriendsInterface()
	{
		if (!Z_Registration_Info_UClass_UAdvancedFriendsInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedFriendsInterface.OuterSingleton, Z_Construct_UClass_UAdvancedFriendsInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdvancedFriendsInterface.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedFriendsInterface>()
	{
		return UAdvancedFriendsInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFriendsInterface);
	UAdvancedFriendsInterface::~UAdvancedFriendsInterface() {}
	static FName NAME_UAdvancedFriendsInterface_OnPlayerLoginChanged = FName(TEXT("OnPlayerLoginChanged"));
	void IAdvancedFriendsInterface::Execute_OnPlayerLoginChanged(UObject* O, int32 PlayerNum)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnPlayerLoginChanged);
		if (Func)
		{
			Parms.PlayerNum=PlayerNum;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged = FName(TEXT("OnPlayerLoginStatusChanged"));
	void IAdvancedFriendsInterface::Execute_OnPlayerLoginStatusChanged(UObject* O, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged);
		if (Func)
		{
			Parms.PreviousStatus=PreviousStatus;
			Parms.NewStatus=NewStatus;
			Parms.PlayerUniqueNetID=PlayerUniqueNetID;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged = FName(TEXT("OnPlayerVoiceStateChanged"));
	void IAdvancedFriendsInterface::Execute_OnPlayerVoiceStateChanged(UObject* O, FBPUniqueNetId PlayerId, bool bIsTalking)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged);
		if (Func)
		{
			Parms.PlayerId=PlayerId;
			Parms.bIsTalking=bIsTalking;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnSessionInviteAccepted = FName(TEXT("OnSessionInviteAccepted"));
	void IAdvancedFriendsInterface::Execute_OnSessionInviteAccepted(UObject* O, FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SearchResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnSessionInviteAccepted);
		if (Func)
		{
			Parms.PersonInvited=PersonInvited;
			Parms.SearchResult=SearchResult;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnSessionInviteReceived = FName(TEXT("OnSessionInviteReceived"));
	void IAdvancedFriendsInterface::Execute_OnSessionInviteReceived(UObject* O, FBPUniqueNetId PersonInviting, FBlueprintSessionResult const& SearchResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnSessionInviteReceived);
		if (Func)
		{
			Parms.PersonInviting=PersonInviting;
			Parms.SearchResult=SearchResult;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedFriendsInterface, UAdvancedFriendsInterface::StaticClass, TEXT("UAdvancedFriendsInterface"), &Z_Registration_Info_UClass_UAdvancedFriendsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedFriendsInterface), 2400296521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_1433141548(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
