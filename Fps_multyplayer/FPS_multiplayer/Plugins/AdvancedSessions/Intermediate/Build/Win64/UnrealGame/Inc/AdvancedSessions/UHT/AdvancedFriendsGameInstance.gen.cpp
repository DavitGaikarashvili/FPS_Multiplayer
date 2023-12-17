// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedFriendsGameInstance.h"
#include "AdvancedSessions/Classes/BlueprintDataDefinitions.h"
#include "FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFriendsGameInstance() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance_NoRegister();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms
	{
		int32 PlayerNum;
	};
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms
	{
		int32 PlayerNum;
		EBPLoginStatus PreviousStatus;
		EBPLoginStatus NewStatus;
		FBPUniqueNetId NewPlayerUniqueNetID;
	};
	struct AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms
	{
		FBPUniqueNetId PlayerId;
		bool bIsTalking;
	};
	struct AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms
	{
		int32 LocalPlayerNum;
		FBPUniqueNetId PersonInvited;
		FBlueprintSessionResult SessionToJoin;
	};
	struct AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms
	{
		int32 LocalPlayerNum;
		FBPUniqueNetId PersonInviting;
		FString AppId;
		FBlueprintSessionResult SessionToJoin;
	};
	static FName NAME_UAdvancedFriendsGameInstance_OnPlayerLoginChanged = FName(TEXT("OnPlayerLoginChanged"));
	void UAdvancedFriendsGameInstance::OnPlayerLoginChanged(int32 PlayerNum)
	{
		AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms Parms;
		Parms.PlayerNum=PlayerNum;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnPlayerLoginChanged),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged = FName(TEXT("OnPlayerLoginStatusChanged"));
	void UAdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int32 PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID)
	{
		AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms Parms;
		Parms.PlayerNum=PlayerNum;
		Parms.PreviousStatus=PreviousStatus;
		Parms.NewStatus=NewStatus;
		Parms.NewPlayerUniqueNetID=NewPlayerUniqueNetID;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged = FName(TEXT("OnPlayerTalkingStateChanged"));
	void UAdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking)
	{
		AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms Parms;
		Parms.PlayerId=PlayerId;
		Parms.bIsTalking=bIsTalking ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnSessionInviteAccepted = FName(TEXT("OnSessionInviteAccepted"));
	void UAdvancedFriendsGameInstance::OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SessionToJoin)
	{
		AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms Parms;
		Parms.LocalPlayerNum=LocalPlayerNum;
		Parms.PersonInvited=PersonInvited;
		Parms.SessionToJoin=SessionToJoin;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnSessionInviteAccepted),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnSessionInviteReceived = FName(TEXT("OnSessionInviteReceived"));
	void UAdvancedFriendsGameInstance::OnSessionInviteReceived(int32 LocalPlayerNum, FBPUniqueNetId PersonInviting, const FString& AppId, FBlueprintSessionResult const& SessionToJoin)
	{
		AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms Parms;
		Parms.LocalPlayerNum=LocalPlayerNum;
		Parms.PersonInviting=PersonInviting;
		Parms.AppId=AppId;
		Parms.SessionToJoin=SessionToJoin;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnSessionInviteReceived),&Parms);
	}
	void UAdvancedFriendsGameInstance::StaticRegisterNativesUAdvancedFriendsGameInstance()
	{
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::NewProp_PlayerNum = { "PlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms, PlayerNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::NewProp_PlayerNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedIdentity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the designated LocalUser has changed login state\n" },
#endif
		{ "DisplayName", "OnPlayerLoginChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the designated LocalUser has changed login state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnPlayerLoginChanged", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::PropPointers), sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousStatus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPlayerUniqueNetID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PlayerNum = { "PlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, PlayerNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus = { "PreviousStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, PreviousStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(0, nullptr) }; // 2728875483
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, NewStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(0, nullptr) }; // 2728875483
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewPlayerUniqueNetID = { "NewPlayerUniqueNetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, NewPlayerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PlayerNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewPlayerUniqueNetID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedIdentity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the designated LocalUser has changed login status\n" },
#endif
		{ "DisplayName", "OnPlayerLoginStatusChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the designated LocalUser has changed login status" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnPlayerLoginStatusChanged", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::PropPointers), sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms, PlayerId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
	void Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_bIsTalking_SetBit(void* Obj)
	{
		((AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms*)Obj)->bIsTalking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_bIsTalking = { "bIsTalking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms), &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_bIsTalking_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_bIsTalking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedVoice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// After a voice status has changed this event is triggered if the bEnableTalkingStatusDelegate property is true\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After a voice status has changed this event is triggered if the bEnableTalkingStatusDelegate property is true" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnPlayerTalkingStateChanged", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::PropPointers), sizeof(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PersonInvited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionToJoin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionToJoin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms, LocalPlayerNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_PersonInvited = { "PersonInvited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms, PersonInvited), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin = { "SessionToJoin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms, SessionToJoin), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin_MetaData), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin_MetaData) }; // 3738885261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_LocalPlayerNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_PersonInvited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedFriends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it\n// This function is currently not hooked up in any of Epics default subsystems, it is here for custom subsystems\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it\nThis function is currently not hooked up in any of Epics default subsystems, it is here for custom subsystems" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnSessionInviteAccepted", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::PropPointers), sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PersonInviting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionToJoin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionToJoin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, LocalPlayerNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_PersonInviting = { "PersonInviting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, PersonInviting), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId_MetaData), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin = { "SessionToJoin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, SessionToJoin), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin_MetaData), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin_MetaData) }; // 3738885261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_LocalPlayerNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_PersonInviting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedFriends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnSessionInviteReceived", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::PropPointers), sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedFriendsGameInstance);
	UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance_NoRegister()
	{
		return UAdvancedFriendsGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData[];
#endif
		static void NewProp_bCallFriendInterfaceEventsOnPlayerControllers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallFriendInterfaceEventsOnPlayerControllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData[];
#endif
		static void NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallIdentityInterfaceEventsOnPlayerControllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData[];
#endif
		static void NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallVoiceInterfaceEventsOnPlayerControllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTalkingStatusDelegate_MetaData[];
#endif
		static void NewProp_bEnableTalkingStatusDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTalkingStatusDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged, "OnPlayerLoginChanged" }, // 2024346437
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged, "OnPlayerLoginStatusChanged" }, // 2356462560
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged, "OnPlayerTalkingStateChanged" }, // 493250917
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted, "OnSessionInviteAccepted" }, // 1936138075
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived, "OnSessionInviteReceived" }, // 2925356283
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedFriendsGameInstance.h" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData[] = {
		{ "Category", "AdvancedFriendsInterface" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_SetBit(void* Obj)
	{
		((UAdvancedFriendsGameInstance*)Obj)->bCallFriendInterfaceEventsOnPlayerControllers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers = { "bCallFriendInterfaceEventsOnPlayerControllers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedFriendsGameInstance), &Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData), Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData[] = {
		{ "Category", "AdvancedFriendsInterface" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_SetBit(void* Obj)
	{
		((UAdvancedFriendsGameInstance*)Obj)->bCallIdentityInterfaceEventsOnPlayerControllers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers = { "bCallIdentityInterfaceEventsOnPlayerControllers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedFriendsGameInstance), &Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData), Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData[] = {
		{ "Category", "AdvancedFriendsInterface" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_SetBit(void* Obj)
	{
		((UAdvancedFriendsGameInstance*)Obj)->bCallVoiceInterfaceEventsOnPlayerControllers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers = { "bCallVoiceInterfaceEventsOnPlayerControllers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedFriendsGameInstance), &Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData), Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_MetaData[] = {
		{ "Category", "AdvancedVoiceInterface" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_SetBit(void* Obj)
	{
		((UAdvancedFriendsGameInstance*)Obj)->bEnableTalkingStatusDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate = { "bEnableTalkingStatusDelegate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedFriendsGameInstance), &Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_MetaData), Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedFriendsGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::ClassParams = {
		&UAdvancedFriendsGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance()
	{
		if (!Z_Registration_Info_UClass_UAdvancedFriendsGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedFriendsGameInstance.OuterSingleton, Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdvancedFriendsGameInstance.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedFriendsGameInstance>()
	{
		return UAdvancedFriendsGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFriendsGameInstance);
	UAdvancedFriendsGameInstance::~UAdvancedFriendsGameInstance() {}
	struct Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedFriendsGameInstance, UAdvancedFriendsGameInstance::StaticClass, TEXT("UAdvancedFriendsGameInstance"), &Z_Registration_Info_UClass_UAdvancedFriendsGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedFriendsGameInstance), 4275303968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_3822043630(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
