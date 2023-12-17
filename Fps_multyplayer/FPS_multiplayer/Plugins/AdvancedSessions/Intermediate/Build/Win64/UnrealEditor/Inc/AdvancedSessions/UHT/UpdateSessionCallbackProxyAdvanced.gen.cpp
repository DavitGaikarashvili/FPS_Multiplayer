// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/UpdateSessionCallbackProxyAdvanced.h"
#include "AdvancedSessions/Classes/BlueprintDataDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateSessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	DEFINE_FUNCTION(UUpdateSessionCallbackProxyAdvanced::execUpdateSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_PublicConnections);
		P_GET_PROPERTY(FIntProperty,Z_Param_PrivateConnections);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_GET_UBOOL(Z_Param_bAllowInvites);
		P_GET_UBOOL(Z_Param_bAllowJoinInProgress);
		P_GET_UBOOL(Z_Param_bRefreshOnlineData);
		P_GET_UBOOL(Z_Param_bIsDedicatedServer);
		P_GET_UBOOL(Z_Param_bShouldAdvertise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUpdateSessionCallbackProxyAdvanced**)Z_Param__Result=UUpdateSessionCallbackProxyAdvanced::UpdateSession(Z_Param_WorldContextObject,Z_Param_Out_ExtraSettings,Z_Param_PublicConnections,Z_Param_PrivateConnections,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bAllowJoinInProgress,Z_Param_bRefreshOnlineData,Z_Param_bIsDedicatedServer,Z_Param_bShouldAdvertise);
		P_NATIVE_END;
	}
	void UUpdateSessionCallbackProxyAdvanced::StaticRegisterNativesUUpdateSessionCallbackProxyAdvanced()
	{
		UClass* Class = UUpdateSessionCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSession", &UUpdateSessionCallbackProxyAdvanced::execUpdateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics
	{
		struct UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms
		{
			UObject* WorldContextObject;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			int32 PublicConnections;
			int32 PrivateConnections;
			bool bUseLAN;
			bool bAllowInvites;
			bool bAllowJoinInProgress;
			bool bRefreshOnlineData;
			bool bIsDedicatedServer;
			bool bShouldAdvertise;
			UUpdateSessionCallbackProxyAdvanced* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PublicConnections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrivateConnections;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
		static void NewProp_bRefreshOnlineData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshOnlineData;
		static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(0, nullptr) }; // 1351564640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_ExtraSettings_MetaData), Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_ExtraSettings_MetaData) }; // 1351564640
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_PublicConnections = { "PublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, PublicConnections), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_PrivateConnections = { "PrivateConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, PrivateConnections), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bUseLAN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
	{
		((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bAllowJoinInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bRefreshOnlineData_SetBit(void* Obj)
	{
		((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bRefreshOnlineData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bRefreshOnlineData = { "bRefreshOnlineData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bRefreshOnlineData_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
	{
		((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bIsDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bShouldAdvertise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, ReturnValue), Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_ExtraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_PublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_PrivateConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bUseLAN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bAllowInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bAllowJoinInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bRefreshOnlineData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bIsDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_bShouldAdvertise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ExtraSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Creates a session with the default online subsystem with advanced optional inputs, you MUST fill in all categories or it will pass in values that you didn't want as default values\n" },
#endif
		{ "CPP_Default_bAllowInvites", "false" },
		{ "CPP_Default_bAllowJoinInProgress", "false" },
		{ "CPP_Default_bIsDedicatedServer", "false" },
		{ "CPP_Default_bRefreshOnlineData", "true" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_PrivateConnections", "0" },
		{ "CPP_Default_PublicConnections", "100" },
		{ "ModuleRelativePath", "Classes/UpdateSessionCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a session with the default online subsystem with advanced optional inputs, you MUST fill in all categories or it will pass in values that you didn't want as default values" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced, nullptr, "UpdateSession", nullptr, nullptr, Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpdateSessionCallbackProxyAdvanced);
	UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_NoRegister()
	{
		return UUpdateSessionCallbackProxyAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics
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
	UObject* (*const Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession, "UpdateSession" }, // 2804584002
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UpdateSessionCallbackProxyAdvanced.h" },
		{ "ModuleRelativePath", "Classes/UpdateSessionCallbackProxyAdvanced.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the session was updated successfully\n" },
#endif
		{ "ModuleRelativePath", "Classes/UpdateSessionCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the session was updated successfully" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateSessionCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData) }; // 747690002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there was an error updating the session\n" },
#endif
		{ "ModuleRelativePath", "Classes/UpdateSessionCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there was an error updating the session" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateSessionCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData), Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData) }; // 747690002
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateSessionCallbackProxyAdvanced>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::ClassParams = {
		&UUpdateSessionCallbackProxyAdvanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams), Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced()
	{
		if (!Z_Registration_Info_UClass_UUpdateSessionCallbackProxyAdvanced.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateSessionCallbackProxyAdvanced.OuterSingleton, Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUpdateSessionCallbackProxyAdvanced.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UUpdateSessionCallbackProxyAdvanced>()
	{
		return UUpdateSessionCallbackProxyAdvanced::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateSessionCallbackProxyAdvanced);
	UUpdateSessionCallbackProxyAdvanced::~UUpdateSessionCallbackProxyAdvanced() {}
	struct Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced, UUpdateSessionCallbackProxyAdvanced::StaticClass, TEXT("UUpdateSessionCallbackProxyAdvanced"), &Z_Registration_Info_UClass_UUpdateSessionCallbackProxyAdvanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateSessionCallbackProxyAdvanced), 3793603459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_1017509023(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_niwel_Documents_GitHub_AD_5_3_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
