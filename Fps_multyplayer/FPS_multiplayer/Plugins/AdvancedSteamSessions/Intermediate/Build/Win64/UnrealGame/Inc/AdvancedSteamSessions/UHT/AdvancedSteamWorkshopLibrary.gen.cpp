// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Classes/AdvancedSteamWorkshopLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedSteamWorkshopLibrary() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult();
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopID();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPSteamWorkshopID;
class UScriptStruct* FBPSteamWorkshopID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPSteamWorkshopID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPSteamWorkshopID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamWorkshopID, (UObject*)Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamWorkshopID"));
	}
	return Z_Registration_Info_UScriptStruct_BPSteamWorkshopID.OuterSingleton;
}
template<> ADVANCEDSTEAMSESSIONS_API UScriptStruct* StaticStruct<FBPSteamWorkshopID>()
{
	return FBPSteamWorkshopID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Using a custom struct because uint32 isn't blueprint supported and I don't want to cast to int32\n// due to the size of the workshop it could end up overflowing?\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Using a custom struct because uint32 isn't blueprint supported and I don't want to cast to int32\ndue to the size of the workshop it could end up overflowing?" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSteamWorkshopID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
		nullptr,
		&NewStructOps,
		"BPSteamWorkshopID",
		nullptr,
		0,
		sizeof(FBPSteamWorkshopID),
		alignof(FBPSteamWorkshopID),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopID()
	{
		if (!Z_Registration_Info_UScriptStruct_BPSteamWorkshopID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPSteamWorkshopID.InnerSingleton, Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPSteamWorkshopID.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FBPSteamResult;
	static UEnum* FBPSteamResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FBPSteamResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FBPSteamResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult, (UObject*)Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("FBPSteamResult"));
		}
		return Z_Registration_Info_UEnum_FBPSteamResult.OuterSingleton;
	}
	template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<FBPSteamResult>()
	{
		return FBPSteamResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Statics::Enumerators[] = {
		{ "FBPSteamResult::K_EResultInvalid", (int64)FBPSteamResult::K_EResultInvalid },
		{ "FBPSteamResult::k_EResultOK", (int64)FBPSteamResult::k_EResultOK },
		{ "FBPSteamResult::k_EResultFail", (int64)FBPSteamResult::k_EResultFail },
		{ "FBPSteamResult::k_EResultNoConnection", (int64)FBPSteamResult::k_EResultNoConnection },
		{ "FBPSteamResult::k_EResultInvalidPassword", (int64)FBPSteamResult::k_EResultInvalidPassword },
		{ "FBPSteamResult::k_EResultLoggedInElsewhere", (int64)FBPSteamResult::k_EResultLoggedInElsewhere },
		{ "FBPSteamResult::k_EResultInvalidProtocolVer", (int64)FBPSteamResult::k_EResultInvalidProtocolVer },
		{ "FBPSteamResult::k_EResultInvalidParam", (int64)FBPSteamResult::k_EResultInvalidParam },
		{ "FBPSteamResult::k_EResultFileNotFound", (int64)FBPSteamResult::k_EResultFileNotFound },
		{ "FBPSteamResult::k_EResultBusy", (int64)FBPSteamResult::k_EResultBusy },
		{ "FBPSteamResult::k_EResultInvalidState", (int64)FBPSteamResult::k_EResultInvalidState },
		{ "FBPSteamResult::k_EResultInvalidName", (int64)FBPSteamResult::k_EResultInvalidName },
		{ "FBPSteamResult::k_EResultInvalidEmail", (int64)FBPSteamResult::k_EResultInvalidEmail },
		{ "FBPSteamResult::k_EResultDuplicateName", (int64)FBPSteamResult::k_EResultDuplicateName },
		{ "FBPSteamResult::k_EResultAccessDenied", (int64)FBPSteamResult::k_EResultAccessDenied },
		{ "FBPSteamResult::k_EResultTimeout", (int64)FBPSteamResult::k_EResultTimeout },
		{ "FBPSteamResult::k_EResultBanned", (int64)FBPSteamResult::k_EResultBanned },
		{ "FBPSteamResult::k_EResultAccountNotFound", (int64)FBPSteamResult::k_EResultAccountNotFound },
		{ "FBPSteamResult::k_EResultInvalidSteamID", (int64)FBPSteamResult::k_EResultInvalidSteamID },
		{ "FBPSteamResult::k_EResultServiceUnavailable", (int64)FBPSteamResult::k_EResultServiceUnavailable },
		{ "FBPSteamResult::k_EResultNotLoggedOn", (int64)FBPSteamResult::k_EResultNotLoggedOn },
		{ "FBPSteamResult::k_EResultPending", (int64)FBPSteamResult::k_EResultPending },
		{ "FBPSteamResult::k_EResultEncryptionFailure", (int64)FBPSteamResult::k_EResultEncryptionFailure },
		{ "FBPSteamResult::k_EResultInsufficientPrivilege", (int64)FBPSteamResult::k_EResultInsufficientPrivilege },
		{ "FBPSteamResult::k_EResultLimitExceeded", (int64)FBPSteamResult::k_EResultLimitExceeded },
		{ "FBPSteamResult::k_EResultRevoked", (int64)FBPSteamResult::k_EResultRevoked },
		{ "FBPSteamResult::k_EResultExpired", (int64)FBPSteamResult::k_EResultExpired },
		{ "FBPSteamResult::k_EResultAlreadyRedeemed", (int64)FBPSteamResult::k_EResultAlreadyRedeemed },
		{ "FBPSteamResult::k_EResultDuplicateRequest", (int64)FBPSteamResult::k_EResultDuplicateRequest },
		{ "FBPSteamResult::k_EResultAlreadyOwned", (int64)FBPSteamResult::k_EResultAlreadyOwned },
		{ "FBPSteamResult::k_EResultIPNotFound", (int64)FBPSteamResult::k_EResultIPNotFound },
		{ "FBPSteamResult::k_EResultPersistFailed", (int64)FBPSteamResult::k_EResultPersistFailed },
		{ "FBPSteamResult::k_EResultLockingFailed", (int64)FBPSteamResult::k_EResultLockingFailed },
		{ "FBPSteamResult::k_EResultLogonSessionReplaced", (int64)FBPSteamResult::k_EResultLogonSessionReplaced },
		{ "FBPSteamResult::k_EResultConnectFailed", (int64)FBPSteamResult::k_EResultConnectFailed },
		{ "FBPSteamResult::k_EResultHandshakeFailed", (int64)FBPSteamResult::k_EResultHandshakeFailed },
		{ "FBPSteamResult::k_EResultIOFailure", (int64)FBPSteamResult::k_EResultIOFailure },
		{ "FBPSteamResult::k_EResultRemoteDisconnect", (int64)FBPSteamResult::k_EResultRemoteDisconnect },
		{ "FBPSteamResult::k_EResultShoppingCartNotFound", (int64)FBPSteamResult::k_EResultShoppingCartNotFound },
		{ "FBPSteamResult::k_EResultBlocked", (int64)FBPSteamResult::k_EResultBlocked },
		{ "FBPSteamResult::k_EResultIgnored", (int64)FBPSteamResult::k_EResultIgnored },
		{ "FBPSteamResult::k_EResultNoMatch", (int64)FBPSteamResult::k_EResultNoMatch },
		{ "FBPSteamResult::k_EResultAccountDisabled", (int64)FBPSteamResult::k_EResultAccountDisabled },
		{ "FBPSteamResult::k_EResultServiceReadOnly", (int64)FBPSteamResult::k_EResultServiceReadOnly },
		{ "FBPSteamResult::k_EResultAccountNotFeatured", (int64)FBPSteamResult::k_EResultAccountNotFeatured },
		{ "FBPSteamResult::k_EResultAdministratorOK", (int64)FBPSteamResult::k_EResultAdministratorOK },
		{ "FBPSteamResult::k_EResultContentVersion", (int64)FBPSteamResult::k_EResultContentVersion },
		{ "FBPSteamResult::k_EResultTryAnotherCM", (int64)FBPSteamResult::k_EResultTryAnotherCM },
		{ "FBPSteamResult::k_EResultPasswordRequiredToKickSession", (int64)FBPSteamResult::k_EResultPasswordRequiredToKickSession },
		{ "FBPSteamResult::k_EResultAlreadyLoggedInElsewhere", (int64)FBPSteamResult::k_EResultAlreadyLoggedInElsewhere },
		{ "FBPSteamResult::k_EResultSuspended", (int64)FBPSteamResult::k_EResultSuspended },
		{ "FBPSteamResult::k_EResultCancelled", (int64)FBPSteamResult::k_EResultCancelled },
		{ "FBPSteamResult::k_EResultDataCorruption", (int64)FBPSteamResult::k_EResultDataCorruption },
		{ "FBPSteamResult::k_EResultDiskFull", (int64)FBPSteamResult::k_EResultDiskFull },
		{ "FBPSteamResult::k_EResultRemoteCallFailed", (int64)FBPSteamResult::k_EResultRemoteCallFailed },
		{ "FBPSteamResult::k_EResultPasswordUnset", (int64)FBPSteamResult::k_EResultPasswordUnset },
		{ "FBPSteamResult::k_EResultExternalAccountUnlinked", (int64)FBPSteamResult::k_EResultExternalAccountUnlinked },
		{ "FBPSteamResult::k_EResultPSNTicketInvalid", (int64)FBPSteamResult::k_EResultPSNTicketInvalid },
		{ "FBPSteamResult::k_EResultExternalAccountAlreadyLinked", (int64)FBPSteamResult::k_EResultExternalAccountAlreadyLinked },
		{ "FBPSteamResult::k_EResultRemoteFileConflict", (int64)FBPSteamResult::k_EResultRemoteFileConflict },
		{ "FBPSteamResult::k_EResultIllegalPassword", (int64)FBPSteamResult::k_EResultIllegalPassword },
		{ "FBPSteamResult::k_EResultSameAsPreviousValue", (int64)FBPSteamResult::k_EResultSameAsPreviousValue },
		{ "FBPSteamResult::k_EResultAccountLogonDenied", (int64)FBPSteamResult::k_EResultAccountLogonDenied },
		{ "FBPSteamResult::k_EResultCannotUseOldPassword", (int64)FBPSteamResult::k_EResultCannotUseOldPassword },
		{ "FBPSteamResult::k_EResultInvalidLoginAuthCode", (int64)FBPSteamResult::k_EResultInvalidLoginAuthCode },
		{ "FBPSteamResult::k_EResultAccountLogonDeniedNoMail", (int64)FBPSteamResult::k_EResultAccountLogonDeniedNoMail },
		{ "FBPSteamResult::k_EResultHardwareNotCapableOfIPT", (int64)FBPSteamResult::k_EResultHardwareNotCapableOfIPT },
		{ "FBPSteamResult::k_EResultIPTInitError", (int64)FBPSteamResult::k_EResultIPTInitError },
		{ "FBPSteamResult::k_EResultParentalControlRestricted", (int64)FBPSteamResult::k_EResultParentalControlRestricted },
		{ "FBPSteamResult::k_EResultFacebookQueryError", (int64)FBPSteamResult::k_EResultFacebookQueryError },
		{ "FBPSteamResult::k_EResultExpiredLoginAuthCode", (int64)FBPSteamResult::k_EResultExpiredLoginAuthCode },
		{ "FBPSteamResult::k_EResultIPLoginRestrictionFailed", (int64)FBPSteamResult::k_EResultIPLoginRestrictionFailed },
		{ "FBPSteamResult::k_EResultAccountLockedDown", (int64)FBPSteamResult::k_EResultAccountLockedDown },
		{ "FBPSteamResult::k_EResultAccountLogonDeniedVerifiedEmailRequired", (int64)FBPSteamResult::k_EResultAccountLogonDeniedVerifiedEmailRequired },
		{ "FBPSteamResult::k_EResultNoMatchingURL", (int64)FBPSteamResult::k_EResultNoMatchingURL },
		{ "FBPSteamResult::k_EResultBadResponse", (int64)FBPSteamResult::k_EResultBadResponse },
		{ "FBPSteamResult::k_EResultRequirePasswordReEntry", (int64)FBPSteamResult::k_EResultRequirePasswordReEntry },
		{ "FBPSteamResult::k_EResultValueOutOfRange", (int64)FBPSteamResult::k_EResultValueOutOfRange },
		{ "FBPSteamResult::k_EResultUnexpectedError", (int64)FBPSteamResult::k_EResultUnexpectedError },
		{ "FBPSteamResult::k_EResultDisabled", (int64)FBPSteamResult::k_EResultDisabled },
		{ "FBPSteamResult::k_EResultInvalidCEGSubmission", (int64)FBPSteamResult::k_EResultInvalidCEGSubmission },
		{ "FBPSteamResult::k_EResultRestrictedDevice", (int64)FBPSteamResult::k_EResultRestrictedDevice },
		{ "FBPSteamResult::k_EResultRegionLocked", (int64)FBPSteamResult::k_EResultRegionLocked },
		{ "FBPSteamResult::k_EResultRateLimitExceeded", (int64)FBPSteamResult::k_EResultRateLimitExceeded },
		{ "FBPSteamResult::k_EResultAccountLoginDeniedNeedTwoFactor", (int64)FBPSteamResult::k_EResultAccountLoginDeniedNeedTwoFactor },
		{ "FBPSteamResult::k_EResultItemDeleted", (int64)FBPSteamResult::k_EResultItemDeleted },
		{ "FBPSteamResult::k_EResultAccountLoginDeniedThrottle", (int64)FBPSteamResult::k_EResultAccountLoginDeniedThrottle },
		{ "FBPSteamResult::k_EResultTwoFactorCodeMismatch", (int64)FBPSteamResult::k_EResultTwoFactorCodeMismatch },
		{ "FBPSteamResult::k_EResultTwoFactorActivationCodeMismatch", (int64)FBPSteamResult::k_EResultTwoFactorActivationCodeMismatch },
		{ "FBPSteamResult::k_EResultAccountAssociatedToMultiplePartners", (int64)FBPSteamResult::k_EResultAccountAssociatedToMultiplePartners },
		{ "FBPSteamResult::k_EResultNotModified", (int64)FBPSteamResult::k_EResultNotModified },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// General result codes - Copying steams version over\n// Check these to future proof\n" },
#endif
		{ "k_EResultAccessDenied.Comment", "// name is not unique\n" },
		{ "k_EResultAccessDenied.Name", "FBPSteamResult::k_EResultAccessDenied" },
		{ "k_EResultAccessDenied.ToolTip", "name is not unique" },
		{ "k_EResultAccountAssociatedToMultiplePartners.Comment", "// activation code for two-factor didn't match\n" },
		{ "k_EResultAccountAssociatedToMultiplePartners.Name", "FBPSteamResult::k_EResultAccountAssociatedToMultiplePartners" },
		{ "k_EResultAccountAssociatedToMultiplePartners.ToolTip", "activation code for two-factor didn't match" },
		{ "k_EResultAccountDisabled.Comment", "// nothing matching the request found\n" },
		{ "k_EResultAccountDisabled.Name", "FBPSteamResult::k_EResultAccountDisabled" },
		{ "k_EResultAccountDisabled.ToolTip", "nothing matching the request found" },
		{ "k_EResultAccountLockedDown.Name", "FBPSteamResult::k_EResultAccountLockedDown" },
		{ "k_EResultAccountLoginDeniedNeedTwoFactor.Comment", "// Temporary rate limit exceeded, try again later, different from k_EResultLimitExceeded which may be permanent\n" },
		{ "k_EResultAccountLoginDeniedNeedTwoFactor.Name", "FBPSteamResult::k_EResultAccountLoginDeniedNeedTwoFactor" },
		{ "k_EResultAccountLoginDeniedNeedTwoFactor.ToolTip", "Temporary rate limit exceeded, try again later, different from k_EResultLimitExceeded which may be permanent" },
		{ "k_EResultAccountLoginDeniedThrottle.Comment", "// The thing we're trying to access has been deleted\n" },
		{ "k_EResultAccountLoginDeniedThrottle.Name", "FBPSteamResult::k_EResultAccountLoginDeniedThrottle" },
		{ "k_EResultAccountLoginDeniedThrottle.ToolTip", "The thing we're trying to access has been deleted" },
		{ "k_EResultAccountLogonDenied.Comment", "// new value is the same as the old one ( secret question and answer )\n" },
		{ "k_EResultAccountLogonDenied.Name", "FBPSteamResult::k_EResultAccountLogonDenied" },
		{ "k_EResultAccountLogonDenied.ToolTip", "new value is the same as the old one ( secret question and answer )" },
		{ "k_EResultAccountLogonDeniedNoMail.Comment", "// account login denied due to auth code invalid\n" },
		{ "k_EResultAccountLogonDeniedNoMail.Name", "FBPSteamResult::k_EResultAccountLogonDeniedNoMail" },
		{ "k_EResultAccountLogonDeniedNoMail.ToolTip", "account login denied due to auth code invalid" },
		{ "k_EResultAccountLogonDeniedVerifiedEmailRequired.Name", "FBPSteamResult::k_EResultAccountLogonDeniedVerifiedEmailRequired" },
		{ "k_EResultAccountNotFeatured.Comment", "// this service is not accepting content changes right now\n" },
		{ "k_EResultAccountNotFeatured.Name", "FBPSteamResult::k_EResultAccountNotFeatured" },
		{ "k_EResultAccountNotFeatured.ToolTip", "this service is not accepting content changes right now" },
		{ "k_EResultAccountNotFound.Comment", "// VAC2 banned\n" },
		{ "k_EResultAccountNotFound.Name", "FBPSteamResult::k_EResultAccountNotFound" },
		{ "k_EResultAccountNotFound.ToolTip", "VAC2 banned" },
		{ "k_EResultAdministratorOK.Comment", "// account doesn't have value, so this feature isn't available\n" },
		{ "k_EResultAdministratorOK.Name", "FBPSteamResult::k_EResultAdministratorOK" },
		{ "k_EResultAdministratorOK.ToolTip", "account doesn't have value, so this feature isn't available" },
		{ "k_EResultAlreadyLoggedInElsewhere.Comment", "// You are already logged in elsewhere, this cached credential login has failed.\n" },
		{ "k_EResultAlreadyLoggedInElsewhere.Name", "FBPSteamResult::k_EResultAlreadyLoggedInElsewhere" },
		{ "k_EResultAlreadyLoggedInElsewhere.ToolTip", "You are already logged in elsewhere, this cached credential login has failed." },
		{ "k_EResultAlreadyOwned.Comment", "// The request is a duplicate and the action has already occurred in the past, ignored this time\n" },
		{ "k_EResultAlreadyOwned.Name", "FBPSteamResult::k_EResultAlreadyOwned" },
		{ "k_EResultAlreadyOwned.ToolTip", "The request is a duplicate and the action has already occurred in the past, ignored this time" },
		{ "k_EResultAlreadyRedeemed.Comment", "// License/Guest pass the user is trying to access is expired\n" },
		{ "k_EResultAlreadyRedeemed.Name", "FBPSteamResult::k_EResultAlreadyRedeemed" },
		{ "k_EResultAlreadyRedeemed.ToolTip", "License/Guest pass the user is trying to access is expired" },
		{ "k_EResultBadResponse.Name", "FBPSteamResult::k_EResultBadResponse" },
		{ "k_EResultBanned.Comment", "// operation timed out\n" },
		{ "k_EResultBanned.Name", "FBPSteamResult::k_EResultBanned" },
		{ "k_EResultBanned.ToolTip", "operation timed out" },
		{ "k_EResultBlocked.Comment", "// failed to find the shopping cart requested\n" },
		{ "k_EResultBlocked.Name", "FBPSteamResult::k_EResultBlocked" },
		{ "k_EResultBlocked.ToolTip", "failed to find the shopping cart requested" },
		{ "k_EResultBusy.Comment", "// file was not found\n" },
		{ "k_EResultBusy.Name", "FBPSteamResult::k_EResultBusy" },
		{ "k_EResultBusy.ToolTip", "file was not found" },
		{ "k_EResultCancelled.Comment", "// Long running operation (content download) suspended/paused\n" },
		{ "k_EResultCancelled.Name", "FBPSteamResult::k_EResultCancelled" },
		{ "k_EResultCancelled.ToolTip", "Long running operation (content download) suspended/paused" },
		{ "k_EResultCannotUseOldPassword.Comment", "// account login denied due to 2nd factor authentication failure\n" },
		{ "k_EResultCannotUseOldPassword.Name", "FBPSteamResult::k_EResultCannotUseOldPassword" },
		{ "k_EResultCannotUseOldPassword.ToolTip", "account login denied due to 2nd factor authentication failure" },
		{ "k_EResultConnectFailed.Name", "FBPSteamResult::k_EResultConnectFailed" },
		{ "k_EResultContentVersion.Comment", "// allowed to take this action, but only because requester is admin\n" },
		{ "k_EResultContentVersion.Name", "FBPSteamResult::k_EResultContentVersion" },
		{ "k_EResultContentVersion.ToolTip", "allowed to take this action, but only because requester is admin" },
		{ "k_EResultDataCorruption.Comment", "// Operation canceled (typically by user: content download)\n" },
		{ "k_EResultDataCorruption.Name", "FBPSteamResult::k_EResultDataCorruption" },
		{ "k_EResultDataCorruption.ToolTip", "Operation canceled (typically by user: content download)" },
		{ "k_EResultDisabled.Comment", "// something happened that we didn't expect to ever happen\n" },
		{ "k_EResultDisabled.Name", "FBPSteamResult::k_EResultDisabled" },
		{ "k_EResultDisabled.ToolTip", "something happened that we didn't expect to ever happen" },
		{ "k_EResultDiskFull.Comment", "// Operation canceled because data is ill formed or unrecoverable\n" },
		{ "k_EResultDiskFull.Name", "FBPSteamResult::k_EResultDiskFull" },
		{ "k_EResultDiskFull.ToolTip", "Operation canceled because data is ill formed or unrecoverable" },
		{ "k_EResultDuplicateName.Comment", "// email is invalid\n" },
		{ "k_EResultDuplicateName.Name", "FBPSteamResult::k_EResultDuplicateName" },
		{ "k_EResultDuplicateName.ToolTip", "email is invalid" },
		{ "k_EResultDuplicateRequest.Comment", "// Guest pass has already been redeemed by account, cannot be acked again\n" },
		{ "k_EResultDuplicateRequest.Name", "FBPSteamResult::k_EResultDuplicateRequest" },
		{ "k_EResultDuplicateRequest.ToolTip", "Guest pass has already been redeemed by account, cannot be acked again" },
		{ "k_EResultEncryptionFailure.Comment", "// Request is pending (may be in process, or waiting on third party)\n" },
		{ "k_EResultEncryptionFailure.Name", "FBPSteamResult::k_EResultEncryptionFailure" },
		{ "k_EResultEncryptionFailure.ToolTip", "Request is pending (may be in process, or waiting on third party)" },
		{ "k_EResultExpired.Comment", "// Access has been revoked (used for revoked guest passes)\n" },
		{ "k_EResultExpired.Name", "FBPSteamResult::k_EResultExpired" },
		{ "k_EResultExpired.ToolTip", "Access has been revoked (used for revoked guest passes)" },
		{ "k_EResultExpiredLoginAuthCode.Comment", "// Facebook query returned an error\n" },
		{ "k_EResultExpiredLoginAuthCode.Name", "FBPSteamResult::k_EResultExpiredLoginAuthCode" },
		{ "k_EResultExpiredLoginAuthCode.ToolTip", "Facebook query returned an error" },
		{ "k_EResultExternalAccountAlreadyLinked.Comment", "// PSN ticket was invalid\n" },
		{ "k_EResultExternalAccountAlreadyLinked.Name", "FBPSteamResult::k_EResultExternalAccountAlreadyLinked" },
		{ "k_EResultExternalAccountAlreadyLinked.ToolTip", "PSN ticket was invalid" },
		{ "k_EResultExternalAccountUnlinked.Comment", "// Password could not be verified as it's unset server side\n" },
		{ "k_EResultExternalAccountUnlinked.Name", "FBPSteamResult::k_EResultExternalAccountUnlinked" },
		{ "k_EResultExternalAccountUnlinked.ToolTip", "Password could not be verified as it's unset server side" },
		{ "k_EResultFacebookQueryError.Comment", "// \n// \n// operation failed due to parental control restrictions for current user\n" },
		{ "k_EResultFacebookQueryError.Name", "FBPSteamResult::k_EResultFacebookQueryError" },
		{ "k_EResultFacebookQueryError.ToolTip", "operation failed due to parental control restrictions for current user" },
		{ "k_EResultFail.Comment", "// success\n" },
		{ "k_EResultFail.Name", "FBPSteamResult::k_EResultFail" },
		{ "k_EResultFail.ToolTip", "success" },
		{ "k_EResultFileNotFound.Comment", "// a parameter is incorrect\n" },
		{ "k_EResultFileNotFound.Name", "FBPSteamResult::k_EResultFileNotFound" },
		{ "k_EResultFileNotFound.ToolTip", "a parameter is incorrect" },
		{ "k_EResultHandshakeFailed.Name", "FBPSteamResult::k_EResultHandshakeFailed" },
		{ "k_EResultHardwareNotCapableOfIPT.Comment", "// account login denied due to 2nd factor auth failure - and no mail has been sent\n" },
		{ "k_EResultHardwareNotCapableOfIPT.Name", "FBPSteamResult::k_EResultHardwareNotCapableOfIPT" },
		{ "k_EResultHardwareNotCapableOfIPT.ToolTip", "account login denied due to 2nd factor auth failure - and no mail has been sent" },
		{ "k_EResultIgnored.Comment", "// a user didn't allow it\n" },
		{ "k_EResultIgnored.Name", "FBPSteamResult::k_EResultIgnored" },
		{ "k_EResultIgnored.ToolTip", "a user didn't allow it" },
		{ "k_EResultIllegalPassword.Comment", "// The sync cannot resume due to a conflict between the local and remote files\n" },
		{ "k_EResultIllegalPassword.Name", "FBPSteamResult::k_EResultIllegalPassword" },
		{ "k_EResultIllegalPassword.ToolTip", "The sync cannot resume due to a conflict between the local and remote files" },
		{ "k_EResultInsufficientPrivilege.Comment", "// Encryption or Decryption failed\n" },
		{ "k_EResultInsufficientPrivilege.Name", "FBPSteamResult::k_EResultInsufficientPrivilege" },
		{ "k_EResultInsufficientPrivilege.ToolTip", "Encryption or Decryption failed" },
		{ "K_EResultInvalid.Name", "FBPSteamResult::K_EResultInvalid" },
		{ "k_EResultInvalidCEGSubmission.Comment", "// The requested service has been configured to be unavailable\n" },
		{ "k_EResultInvalidCEGSubmission.Name", "FBPSteamResult::k_EResultInvalidCEGSubmission" },
		{ "k_EResultInvalidCEGSubmission.ToolTip", "The requested service has been configured to be unavailable" },
		{ "k_EResultInvalidEmail.Comment", "// name is invalid\n" },
		{ "k_EResultInvalidEmail.Name", "FBPSteamResult::k_EResultInvalidEmail" },
		{ "k_EResultInvalidEmail.ToolTip", "name is invalid" },
		{ "k_EResultInvalidLoginAuthCode.Comment", "// The requested new password is not legal\n" },
		{ "k_EResultInvalidLoginAuthCode.Name", "FBPSteamResult::k_EResultInvalidLoginAuthCode" },
		{ "k_EResultInvalidLoginAuthCode.ToolTip", "The requested new password is not legal" },
		{ "k_EResultInvalidName.Comment", "// called object was in an invalid state\n" },
		{ "k_EResultInvalidName.Name", "FBPSteamResult::k_EResultInvalidName" },
		{ "k_EResultInvalidName.ToolTip", "called object was in an invalid state" },
		{ "k_EResultInvalidParam.Comment", "// protocol version is incorrect\n" },
		{ "k_EResultInvalidParam.Name", "FBPSteamResult::k_EResultInvalidParam" },
		{ "k_EResultInvalidParam.ToolTip", "protocol version is incorrect" },
		{ "k_EResultInvalidPassword.Comment", "// no/failed network connection\n//\x09k_EResultNoConnectionRetry = 4,\x09\x09\x09\x09// OBSOLETE - removed\n" },
		{ "k_EResultInvalidPassword.Name", "FBPSteamResult::k_EResultInvalidPassword" },
		{ "k_EResultInvalidPassword.ToolTip", "no/failed network connection\n      k_EResultNoConnectionRetry = 4,                          OBSOLETE - removed" },
		{ "k_EResultInvalidProtocolVer.Comment", "// same user logged in elsewhere\n" },
		{ "k_EResultInvalidProtocolVer.Name", "FBPSteamResult::k_EResultInvalidProtocolVer" },
		{ "k_EResultInvalidProtocolVer.ToolTip", "same user logged in elsewhere" },
		{ "k_EResultInvalidState.Comment", "// called method busy - action not taken\n" },
		{ "k_EResultInvalidState.Name", "FBPSteamResult::k_EResultInvalidState" },
		{ "k_EResultInvalidState.ToolTip", "called method busy - action not taken" },
		{ "k_EResultInvalidSteamID.Comment", "// account not found\n" },
		{ "k_EResultInvalidSteamID.Name", "FBPSteamResult::k_EResultInvalidSteamID" },
		{ "k_EResultInvalidSteamID.ToolTip", "account not found" },
		{ "k_EResultIOFailure.Name", "FBPSteamResult::k_EResultIOFailure" },
		{ "k_EResultIPLoginRestrictionFailed.Comment", "// account login denied due to auth code expired\n" },
		{ "k_EResultIPLoginRestrictionFailed.Name", "FBPSteamResult::k_EResultIPLoginRestrictionFailed" },
		{ "k_EResultIPLoginRestrictionFailed.ToolTip", "account login denied due to auth code expired" },
		{ "k_EResultIPNotFound.Comment", "// All the games in this guest pass redemption request are already owned by the user\n" },
		{ "k_EResultIPNotFound.Name", "FBPSteamResult::k_EResultIPNotFound" },
		{ "k_EResultIPNotFound.ToolTip", "All the games in this guest pass redemption request are already owned by the user" },
		{ "k_EResultIPTInitError.Comment", "// \n" },
		{ "k_EResultIPTInitError.Name", "FBPSteamResult::k_EResultIPTInitError" },
		{ "k_EResultItemDeleted.Comment", "// Need two-factor code to login\n" },
		{ "k_EResultItemDeleted.Name", "FBPSteamResult::k_EResultItemDeleted" },
		{ "k_EResultItemDeleted.ToolTip", "Need two-factor code to login" },
		{ "k_EResultLimitExceeded.Comment", "// Insufficient privilege\n" },
		{ "k_EResultLimitExceeded.Name", "FBPSteamResult::k_EResultLimitExceeded" },
		{ "k_EResultLimitExceeded.ToolTip", "Insufficient privilege" },
		{ "k_EResultLockingFailed.Comment", "// failed to write change to the data store\n" },
		{ "k_EResultLockingFailed.Name", "FBPSteamResult::k_EResultLockingFailed" },
		{ "k_EResultLockingFailed.ToolTip", "failed to write change to the data store" },
		{ "k_EResultLoggedInElsewhere.Comment", "// password/ticket is invalid\n" },
		{ "k_EResultLoggedInElsewhere.Name", "FBPSteamResult::k_EResultLoggedInElsewhere" },
		{ "k_EResultLoggedInElsewhere.ToolTip", "password/ticket is invalid" },
		{ "k_EResultLogonSessionReplaced.Comment", "// failed to acquire access lock for this operation\n" },
		{ "k_EResultLogonSessionReplaced.Name", "FBPSteamResult::k_EResultLogonSessionReplaced" },
		{ "k_EResultLogonSessionReplaced.ToolTip", "failed to acquire access lock for this operation" },
		{ "k_EResultNoConnection.Comment", "// generic failure \n" },
		{ "k_EResultNoConnection.Name", "FBPSteamResult::k_EResultNoConnection" },
		{ "k_EResultNoConnection.ToolTip", "generic failure" },
		{ "k_EResultNoMatch.Comment", "// target is ignoring sender\n" },
		{ "k_EResultNoMatch.Name", "FBPSteamResult::k_EResultNoMatch" },
		{ "k_EResultNoMatch.ToolTip", "target is ignoring sender" },
		{ "k_EResultNoMatchingURL.Name", "FBPSteamResult::k_EResultNoMatchingURL" },
		{ "k_EResultNotLoggedOn.Comment", "// The requested service is currently unavailable\n" },
		{ "k_EResultNotLoggedOn.Name", "FBPSteamResult::k_EResultNotLoggedOn" },
		{ "k_EResultNotLoggedOn.ToolTip", "The requested service is currently unavailable" },
		{ "k_EResultNotModified.Comment", "// account has been associated with multiple partners\n" },
		{ "k_EResultNotModified.Name", "FBPSteamResult::k_EResultNotModified" },
		{ "k_EResultNotModified.ToolTip", "account has been associated with multiple partners" },
		{ "k_EResultOK.Name", "FBPSteamResult::k_EResultOK" },
		{ "k_EResultParentalControlRestricted.Comment", "// \n// \n" },
		{ "k_EResultParentalControlRestricted.Name", "FBPSteamResult::k_EResultParentalControlRestricted" },
		{ "k_EResultPasswordRequiredToKickSession.Comment", "// The current CM can't service the user making a request, user should try another.\n" },
		{ "k_EResultPasswordRequiredToKickSession.Name", "FBPSteamResult::k_EResultPasswordRequiredToKickSession" },
		{ "k_EResultPasswordRequiredToKickSession.ToolTip", "The current CM can't service the user making a request, user should try another." },
		{ "k_EResultPasswordUnset.Comment", "// an remote call or IPC call failed\n" },
		{ "k_EResultPasswordUnset.Name", "FBPSteamResult::k_EResultPasswordUnset" },
		{ "k_EResultPasswordUnset.ToolTip", "an remote call or IPC call failed" },
		{ "k_EResultPending.Comment", "// The user is not logged on\n" },
		{ "k_EResultPending.Name", "FBPSteamResult::k_EResultPending" },
		{ "k_EResultPending.ToolTip", "The user is not logged on" },
		{ "k_EResultPersistFailed.Comment", "// IP address not found\n" },
		{ "k_EResultPersistFailed.Name", "FBPSteamResult::k_EResultPersistFailed" },
		{ "k_EResultPersistFailed.ToolTip", "IP address not found" },
		{ "k_EResultPSNTicketInvalid.Comment", "// External account (PSN, Facebook...) is not linked to a Steam account\n" },
		{ "k_EResultPSNTicketInvalid.Name", "FBPSteamResult::k_EResultPSNTicketInvalid" },
		{ "k_EResultPSNTicketInvalid.ToolTip", "External account (PSN, Facebook...) is not linked to a Steam account" },
		{ "k_EResultRateLimitExceeded.Comment", "// The action could not be complete because it is region restricted\n" },
		{ "k_EResultRateLimitExceeded.Name", "FBPSteamResult::k_EResultRateLimitExceeded" },
		{ "k_EResultRateLimitExceeded.ToolTip", "The action could not be complete because it is region restricted" },
		{ "k_EResultRegionLocked.Comment", "// The device being used is not allowed to perform this action\n" },
		{ "k_EResultRegionLocked.Name", "FBPSteamResult::k_EResultRegionLocked" },
		{ "k_EResultRegionLocked.ToolTip", "The device being used is not allowed to perform this action" },
		{ "k_EResultRemoteCallFailed.Comment", "// Operation canceled - not enough disk space.\n" },
		{ "k_EResultRemoteCallFailed.Name", "FBPSteamResult::k_EResultRemoteCallFailed" },
		{ "k_EResultRemoteCallFailed.ToolTip", "Operation canceled - not enough disk space." },
		{ "k_EResultRemoteDisconnect.Name", "FBPSteamResult::k_EResultRemoteDisconnect" },
		{ "k_EResultRemoteFileConflict.Comment", "// External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first\n" },
		{ "k_EResultRemoteFileConflict.Name", "FBPSteamResult::k_EResultRemoteFileConflict" },
		{ "k_EResultRemoteFileConflict.ToolTip", "External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first" },
		{ "k_EResultRequirePasswordReEntry.Comment", "// parse failure, missing field, etc.\n" },
		{ "k_EResultRequirePasswordReEntry.Name", "FBPSteamResult::k_EResultRequirePasswordReEntry" },
		{ "k_EResultRequirePasswordReEntry.ToolTip", "parse failure, missing field, etc." },
		{ "k_EResultRestrictedDevice.Comment", "// The set of files submitted to the CEG server are not valid !\n" },
		{ "k_EResultRestrictedDevice.Name", "FBPSteamResult::k_EResultRestrictedDevice" },
		{ "k_EResultRestrictedDevice.ToolTip", "The set of files submitted to the CEG server are not valid !" },
		{ "k_EResultRevoked.Comment", "// Too much of a good thing\n" },
		{ "k_EResultRevoked.Name", "FBPSteamResult::k_EResultRevoked" },
		{ "k_EResultRevoked.ToolTip", "Too much of a good thing" },
		{ "k_EResultSameAsPreviousValue.Comment", "// The requested new password is not legal\n" },
		{ "k_EResultSameAsPreviousValue.Name", "FBPSteamResult::k_EResultSameAsPreviousValue" },
		{ "k_EResultSameAsPreviousValue.ToolTip", "The requested new password is not legal" },
		{ "k_EResultServiceReadOnly.Name", "FBPSteamResult::k_EResultServiceReadOnly" },
		{ "k_EResultServiceUnavailable.Comment", "// steamID is invalid\n" },
		{ "k_EResultServiceUnavailable.Name", "FBPSteamResult::k_EResultServiceUnavailable" },
		{ "k_EResultServiceUnavailable.ToolTip", "steamID is invalid" },
		{ "k_EResultShoppingCartNotFound.Name", "FBPSteamResult::k_EResultShoppingCartNotFound" },
		{ "k_EResultSuspended.Comment", "// You are already logged in elsewhere, you must wait\n" },
		{ "k_EResultSuspended.Name", "FBPSteamResult::k_EResultSuspended" },
		{ "k_EResultSuspended.ToolTip", "You are already logged in elsewhere, you must wait" },
		{ "k_EResultTimeout.Comment", "// access is denied\n" },
		{ "k_EResultTimeout.Name", "FBPSteamResult::k_EResultTimeout" },
		{ "k_EResultTimeout.ToolTip", "access is denied" },
		{ "k_EResultTryAnotherCM.Comment", "// A Version mismatch in content transmitted within the Steam protocol.\n" },
		{ "k_EResultTryAnotherCM.Name", "FBPSteamResult::k_EResultTryAnotherCM" },
		{ "k_EResultTryAnotherCM.ToolTip", "A Version mismatch in content transmitted within the Steam protocol." },
		{ "k_EResultTwoFactorActivationCodeMismatch.Comment", "// two factor code mismatch\n" },
		{ "k_EResultTwoFactorActivationCodeMismatch.Name", "FBPSteamResult::k_EResultTwoFactorActivationCodeMismatch" },
		{ "k_EResultTwoFactorActivationCodeMismatch.ToolTip", "two factor code mismatch" },
		{ "k_EResultTwoFactorCodeMismatch.Comment", "// login attempt failed, try to throttle response to possible attacker\n" },
		{ "k_EResultTwoFactorCodeMismatch.Name", "FBPSteamResult::k_EResultTwoFactorCodeMismatch" },
		{ "k_EResultTwoFactorCodeMismatch.ToolTip", "login attempt failed, try to throttle response to possible attacker" },
		{ "k_EResultUnexpectedError.Comment", "// the value entered is outside the acceptable range\n" },
		{ "k_EResultUnexpectedError.Name", "FBPSteamResult::k_EResultUnexpectedError" },
		{ "k_EResultUnexpectedError.ToolTip", "the value entered is outside the acceptable range" },
		{ "k_EResultValueOutOfRange.Comment", "// The user cannot complete the action until they re-enter their password\n" },
		{ "k_EResultValueOutOfRange.Name", "FBPSteamResult::k_EResultValueOutOfRange" },
		{ "k_EResultValueOutOfRange.ToolTip", "The user cannot complete the action until they re-enter their password" },
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General result codes - Copying steams version over\nCheck these to future proof" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
		nullptr,
		"FBPSteamResult",
		"FBPSteamResult",
		Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult()
	{
		if (!Z_Registration_Info_UEnum_FBPSteamResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FBPSteamResult.InnerSingleton, Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FBPSteamResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FBPWorkshopFileType;
	static UEnum* FBPWorkshopFileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FBPWorkshopFileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FBPWorkshopFileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType, (UObject*)Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("FBPWorkshopFileType"));
		}
		return Z_Registration_Info_UEnum_FBPWorkshopFileType.OuterSingleton;
	}
	template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<FBPWorkshopFileType>()
	{
		return FBPWorkshopFileType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Statics::Enumerators[] = {
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeCommunity", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeCommunity },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeMicrotransaction", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeMicrotransaction },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeCollection", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeCollection },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeArt", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeArt },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeVideo", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeVideo },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeScreenshot", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeScreenshot },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeGame", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeGame },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeSoftware", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeSoftware },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeConcept", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeConcept },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeWebGuide", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeWebGuide },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeIntegratedGuide", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeIntegratedGuide },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeMerch", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeMerch },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeControllerBinding", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeControllerBinding },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeSteamworksAccessInvite", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeSteamworksAccessInvite },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeSteamVideo", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeSteamVideo },
		{ "FBPWorkshopFileType::k_EWorkshopFileTypeMax", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeMax },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check these to future proof\n" },
#endif
		{ "k_EWorkshopFileTypeArt.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeArt" },
		{ "k_EWorkshopFileTypeCollection.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeCollection" },
		{ "k_EWorkshopFileTypeCommunity.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeCommunity" },
		{ "k_EWorkshopFileTypeConcept.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeConcept" },
		{ "k_EWorkshopFileTypeControllerBinding.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeControllerBinding" },
		{ "k_EWorkshopFileTypeGame.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeGame" },
		{ "k_EWorkshopFileTypeIntegratedGuide.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeIntegratedGuide" },
		{ "k_EWorkshopFileTypeMax.Comment", "// Update k_EWorkshopFileTypeMax if you add values.\n" },
		{ "k_EWorkshopFileTypeMax.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeMax" },
		{ "k_EWorkshopFileTypeMax.ToolTip", "Update k_EWorkshopFileTypeMax if you add values." },
		{ "k_EWorkshopFileTypeMerch.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeMerch" },
		{ "k_EWorkshopFileTypeMicrotransaction.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeMicrotransaction" },
		{ "k_EWorkshopFileTypeScreenshot.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeScreenshot" },
		{ "k_EWorkshopFileTypeSoftware.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeSoftware" },
		{ "k_EWorkshopFileTypeSteamVideo.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeSteamVideo" },
		{ "k_EWorkshopFileTypeSteamworksAccessInvite.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeSteamworksAccessInvite" },
		{ "k_EWorkshopFileTypeVideo.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeVideo" },
		{ "k_EWorkshopFileTypeWebGuide.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeWebGuide" },
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check these to future proof" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
		nullptr,
		"FBPWorkshopFileType",
		"FBPWorkshopFileType",
		Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType()
	{
		if (!Z_Registration_Info_UEnum_FBPWorkshopFileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FBPWorkshopFileType.InnerSingleton, Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FBPWorkshopFileType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPSteamWorkshopItemDetails;
class UScriptStruct* FBPSteamWorkshopItemDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPSteamWorkshopItemDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPSteamWorkshopItemDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails, (UObject*)Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamWorkshopItemDetails"));
	}
	return Z_Registration_Info_UScriptStruct_BPSteamWorkshopItemDetails.OuterSingleton;
}
template<> ADVANCEDSTEAMSESSIONS_API UScriptStruct* StaticStruct<FBPSteamWorkshopItemDetails>()
{
	return FBPSteamWorkshopItemDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResultOfRequest_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultOfRequest_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultOfRequest;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatorAppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumerAppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VotesUp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VotesUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VotesDown_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VotesDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalculatedScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CalculatedScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBanned_MetaData[];
#endif
		static void NewProp_bBanned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBanned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAcceptedForUse_MetaData[];
#endif
		static void NewProp_bAcceptedForUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAcceptedForUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTagsTruncated_MetaData[];
#endif
		static void NewProp_bTagsTruncated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagsTruncated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatorSteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatorSteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WorkshopItemDetails Struct\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WorkshopItemDetails Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSteamWorkshopItemDetails>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Result of obtaining the details\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of obtaining the details" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest = { "ResultOfRequest", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, ResultOfRequest), Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_MetaData) }; // 3010306538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of file\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of file" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, FileType), Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_MetaData) }; // 3775497922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// These two are listed as baked to an int, but is stored as a uint, think its safe to keep int\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These two are listed as baked to an int, but is stored as a uint, think its safe to keep int" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, CreatorAppID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, ConsumerAppID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Title of item\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Title of item" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description of item\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of item" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Url for a video of website\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Url for a video of website" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl = { "ItemUrl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, ItemUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Votes will be unlikely to go above signed limited\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Votes will be unlikely to go above signed limited" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp = { "VotesUp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, VotesUp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown = { "VotesDown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, VotesDown), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculated score\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculated score" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore = { "CalculatedScore", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, CalculatedScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// whether the file was banned\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "whether the file was banned" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_SetBit(void* Obj)
	{
		((FBPSteamWorkshopItemDetails*)Obj)->bBanned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPSteamWorkshopItemDetails), &Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// developer has specifically flagged this item as accepted in the Workshop\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "developer has specifically flagged this item as accepted in the Workshop" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_SetBit(void* Obj)
	{
		((FBPSteamWorkshopItemDetails*)Obj)->bAcceptedForUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse = { "bAcceptedForUse", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPSteamWorkshopItemDetails), &Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// whether the list of tags was too long to be returned in the provided buffer\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "whether the list of tags was too long to be returned in the provided buffer" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_SetBit(void* Obj)
	{
		((FBPSteamWorkshopItemDetails*)Obj)->bTagsTruncated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated = { "bTagsTruncated", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPSteamWorkshopItemDetails), &Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID_MetaData[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Steam ID of the user who created this content.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steam ID of the user who created this content." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID = { "CreatorSteamID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, CreatorSteamID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID_MetaData), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
		nullptr,
		&NewStructOps,
		"BPSteamWorkshopItemDetails",
		Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::PropPointers),
		sizeof(FBPSteamWorkshopItemDetails),
		alignof(FBPSteamWorkshopItemDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_BPSteamWorkshopItemDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPSteamWorkshopItemDetails.InnerSingleton, Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPSteamWorkshopItemDetails.InnerSingleton;
	}
	DEFINE_FUNCTION(UAdvancedSteamWorkshopLibrary::execGetNumSubscribedWorkshopItems)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumberOfItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(Z_Param_Out_NumberOfItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSteamWorkshopLibrary::execGetSubscribedWorkshopItems)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumberOfItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBPSteamWorkshopID>*)Z_Param__Result=UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(Z_Param_Out_NumberOfItems);
		P_NATIVE_END;
	}
	void UAdvancedSteamWorkshopLibrary::StaticRegisterNativesUAdvancedSteamWorkshopLibrary()
	{
		UClass* Class = UAdvancedSteamWorkshopLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumSubscribedWorkshopItems", &UAdvancedSteamWorkshopLibrary::execGetNumSubscribedWorkshopItems },
			{ "GetSubscribedWorkshopItems", &UAdvancedSteamWorkshopLibrary::execGetSubscribedWorkshopItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics
	{
		struct AdvancedSteamWorkshopLibrary_eventGetNumSubscribedWorkshopItems_Parms
		{
			int32 NumberOfItems;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::NewProp_NumberOfItems = { "NumberOfItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSteamWorkshopLibrary_eventGetNumSubscribedWorkshopItems_Parms, NumberOfItems), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::NewProp_NumberOfItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamWorkshopLibrary, nullptr, "GetNumSubscribedWorkshopItems", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::AdvancedSteamWorkshopLibrary_eventGetNumSubscribedWorkshopItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::AdvancedSteamWorkshopLibrary_eventGetNumSubscribedWorkshopItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics
	{
		struct AdvancedSteamWorkshopLibrary_eventGetSubscribedWorkshopItems_Parms
		{
			int32 NumberOfItems;
			TArray<FBPSteamWorkshopID> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfItems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_NumberOfItems = { "NumberOfItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSteamWorkshopLibrary_eventGetSubscribedWorkshopItems_Parms, NumberOfItems), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPSteamWorkshopID, METADATA_PARAMS(0, nullptr) }; // 4064833852
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedSteamWorkshopLibrary_eventGetSubscribedWorkshopItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4064833852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_NumberOfItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSteamWorkshop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns IDs for subscribed workshop items, TArray length dictates how many\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns IDs for subscribed workshop items, TArray length dictates how many" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamWorkshopLibrary, nullptr, "GetSubscribedWorkshopItems", nullptr, nullptr, Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::AdvancedSteamWorkshopLibrary_eventGetSubscribedWorkshopItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::AdvancedSteamWorkshopLibrary_eventGetSubscribedWorkshopItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedSteamWorkshopLibrary);
	UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_NoRegister()
	{
		return UAdvancedSteamWorkshopLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems, "GetNumSubscribedWorkshopItems" }, // 1574252903
		{ &Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems, "GetSubscribedWorkshopItems" }, // 1765103585
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedSteamWorkshopLibrary.h" },
		{ "ModuleRelativePath", "Classes/AdvancedSteamWorkshopLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedSteamWorkshopLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::ClassParams = {
		&UAdvancedSteamWorkshopLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary()
	{
		if (!Z_Registration_Info_UClass_UAdvancedSteamWorkshopLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedSteamWorkshopLibrary.OuterSingleton, Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdvancedSteamWorkshopLibrary.OuterSingleton;
	}
	template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<UAdvancedSteamWorkshopLibrary>()
	{
		return UAdvancedSteamWorkshopLibrary::StaticClass();
	}
	UAdvancedSteamWorkshopLibrary::UAdvancedSteamWorkshopLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedSteamWorkshopLibrary);
	UAdvancedSteamWorkshopLibrary::~UAdvancedSteamWorkshopLibrary() {}
	struct Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics::EnumInfo[] = {
		{ FBPSteamResult_StaticEnum, TEXT("FBPSteamResult"), &Z_Registration_Info_UEnum_FBPSteamResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3010306538U) },
		{ FBPWorkshopFileType_StaticEnum, TEXT("FBPWorkshopFileType"), &Z_Registration_Info_UEnum_FBPWorkshopFileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3775497922U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics::ScriptStructInfo[] = {
		{ FBPSteamWorkshopID::StaticStruct, Z_Construct_UScriptStruct_FBPSteamWorkshopID_Statics::NewStructOps, TEXT("BPSteamWorkshopID"), &Z_Registration_Info_UScriptStruct_BPSteamWorkshopID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPSteamWorkshopID), 4064833852U) },
		{ FBPSteamWorkshopItemDetails::StaticStruct, Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewStructOps, TEXT("BPSteamWorkshopItemDetails"), &Z_Registration_Info_UScriptStruct_BPSteamWorkshopItemDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPSteamWorkshopItemDetails), 3942441331U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedSteamWorkshopLibrary, UAdvancedSteamWorkshopLibrary::StaticClass, TEXT("UAdvancedSteamWorkshopLibrary"), &Z_Registration_Info_UClass_UAdvancedSteamWorkshopLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedSteamWorkshopLibrary), 2839349091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_842640452(TEXT("/Script/AdvancedSteamSessions"),
		Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
