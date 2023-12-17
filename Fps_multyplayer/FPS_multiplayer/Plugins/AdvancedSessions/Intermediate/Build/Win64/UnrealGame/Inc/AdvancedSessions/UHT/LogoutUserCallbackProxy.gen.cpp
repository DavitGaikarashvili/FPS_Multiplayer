// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/LogoutUserCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogoutUserCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_ULogoutUserCallbackProxy();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_ULogoutUserCallbackProxy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	DEFINE_FUNCTION(ULogoutUserCallbackProxy::execLogoutUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULogoutUserCallbackProxy**)Z_Param__Result=ULogoutUserCallbackProxy::LogoutUser(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void ULogoutUserCallbackProxy::StaticRegisterNativesULogoutUserCallbackProxy()
	{
		UClass* Class = ULogoutUserCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogoutUser", &ULogoutUserCallbackProxy::execLogoutUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics
	{
		struct LogoutUserCallbackProxy_eventLogoutUser_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			ULogoutUserCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogoutUserCallbackProxy_eventLogoutUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogoutUserCallbackProxy_eventLogoutUser_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogoutUserCallbackProxy_eventLogoutUser_Parms, ReturnValue), Z_Construct_UClass_ULogoutUserCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedIdentity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Logs out of the identity interface\n" },
#endif
		{ "ModuleRelativePath", "Classes/LogoutUserCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logs out of the identity interface" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogoutUserCallbackProxy, nullptr, "LogoutUser", nullptr, nullptr, Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::LogoutUserCallbackProxy_eventLogoutUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::LogoutUserCallbackProxy_eventLogoutUser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULogoutUserCallbackProxy);
	UClass* Z_Construct_UClass_ULogoutUserCallbackProxy_NoRegister()
	{
		return ULogoutUserCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_ULogoutUserCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogoutUserCallbackProxy_LogoutUser, "LogoutUser" }, // 2252086785
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LogoutUserCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/LogoutUserCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is a successful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/LogoutUserCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is a successful destroy" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULogoutUserCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnSuccess_MetaData) }; // 747690002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/LogoutUserCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is an unsuccessful destroy" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULogoutUserCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnFailure_MetaData), Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnFailure_MetaData) }; // 747690002
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogoutUserCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::ClassParams = {
		&ULogoutUserCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULogoutUserCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_ULogoutUserCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogoutUserCallbackProxy.OuterSingleton, Z_Construct_UClass_ULogoutUserCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULogoutUserCallbackProxy.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<ULogoutUserCallbackProxy>()
	{
		return ULogoutUserCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogoutUserCallbackProxy);
	ULogoutUserCallbackProxy::~ULogoutUserCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULogoutUserCallbackProxy, ULogoutUserCallbackProxy::StaticClass, TEXT("ULogoutUserCallbackProxy"), &Z_Registration_Info_UClass_ULogoutUserCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogoutUserCallbackProxy), 3481338972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_2795539181(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
