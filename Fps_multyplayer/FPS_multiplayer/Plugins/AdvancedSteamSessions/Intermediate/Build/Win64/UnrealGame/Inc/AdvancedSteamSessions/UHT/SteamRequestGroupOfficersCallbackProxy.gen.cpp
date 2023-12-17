// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Classes/SteamRequestGroupOfficersCallbackProxy.h"
#include "AdvancedSessions/Classes/BlueprintDataDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRequestGroupOfficersCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupOfficer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPSteamGroupOfficer;
class UScriptStruct* FBPSteamGroupOfficer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPSteamGroupOfficer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPSteamGroupOfficer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamGroupOfficer, (UObject*)Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamGroupOfficer"));
	}
	return Z_Registration_Info_UScriptStruct_BPSteamGroupOfficer.OuterSingleton;
}
template<> ADVANCEDSTEAMSESSIONS_API UScriptStruct* StaticStruct<FBPSteamGroupOfficer>()
{
	return FBPSteamGroupOfficer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfficerUniqueNetID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OfficerUniqueNetID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOwner_MetaData[];
#endif
		static void NewProp_bIsOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Online|SteamAPI|SteamGroups" },
		{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSteamGroupOfficer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID_MetaData[] = {
		{ "Category", "Online|SteamAPI|SteamGroups" },
		{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID = { "OfficerUniqueNetID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPSteamGroupOfficer, OfficerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID_MetaData), Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID_MetaData) }; // 740343174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_MetaData[] = {
		{ "Category", "Online|SteamAPI|SteamGroups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uint64 representation\n" },
#endif
		{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uint64 representation" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_SetBit(void* Obj)
	{
		((FBPSteamGroupOfficer*)Obj)->bIsOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner = { "bIsOwner", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPSteamGroupOfficer), &Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_MetaData), Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_OfficerUniqueNetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewProp_bIsOwner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
		nullptr,
		&NewStructOps,
		"BPSteamGroupOfficer",
		Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::PropPointers),
		sizeof(FBPSteamGroupOfficer),
		alignof(FBPSteamGroupOfficer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupOfficer()
	{
		if (!Z_Registration_Info_UScriptStruct_BPSteamGroupOfficer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPSteamGroupOfficer.InnerSingleton, Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPSteamGroupOfficer.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms
		{
			TArray<FBPSteamGroupOfficer> OfficerList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OfficerList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfficerList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OfficerList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::NewProp_OfficerList_Inner = { "OfficerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPSteamGroupOfficer, METADATA_PARAMS(0, nullptr) }; // 2818366645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::NewProp_OfficerList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::NewProp_OfficerList = { "OfficerList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms, OfficerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::NewProp_OfficerList_MetaData), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::NewProp_OfficerList_MetaData) }; // 2818366645
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::NewProp_OfficerList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::NewProp_OfficerList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions, nullptr, "BlueprintGroupOfficerDetailsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::_Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::_Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBlueprintGroupOfficerDetailsDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGroupOfficerDetailsDelegate, TArray<FBPSteamGroupOfficer> const& OfficerList)
{
	struct _Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms
	{
		TArray<FBPSteamGroupOfficer> OfficerList;
	};
	_Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms Parms;
	Parms.OfficerList=OfficerList;
	BlueprintGroupOfficerDetailsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USteamRequestGroupOfficersCallbackProxy::execGetSteamGroupOfficerList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_GroupUniqueNetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamRequestGroupOfficersCallbackProxy**)Z_Param__Result=USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(Z_Param_WorldContextObject,Z_Param_GroupUniqueNetID);
		P_NATIVE_END;
	}
	void USteamRequestGroupOfficersCallbackProxy::StaticRegisterNativesUSteamRequestGroupOfficersCallbackProxy()
	{
		UClass* Class = USteamRequestGroupOfficersCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSteamGroupOfficerList", &USteamRequestGroupOfficersCallbackProxy::execGetSteamGroupOfficerList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics
	{
		struct SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms
		{
			UObject* WorldContextObject;
			FBPUniqueNetId GroupUniqueNetID;
			USteamRequestGroupOfficersCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupUniqueNetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_GroupUniqueNetID = { "GroupUniqueNetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms, GroupUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 740343174
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms, ReturnValue), Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_GroupUniqueNetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|SteamAPI|SteamGroups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a list of steam group officers\n" },
#endif
		{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of steam group officers" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy, nullptr, "GetSteamGroupOfficerList", nullptr, nullptr, Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamRequestGroupOfficersCallbackProxy);
	UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister()
	{
		return USteamRequestGroupOfficersCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList, "GetSteamGroupOfficerList" }, // 4042828835
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRequestGroupOfficersCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is a successful results return\n" },
#endif
		{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is a successful results return" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamRequestGroupOfficersCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess_MetaData) }; // 4056166045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is an unsuccessful results return\n" },
#endif
		{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is an unsuccessful results return" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamRequestGroupOfficersCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure_MetaData), Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure_MetaData) }; // 4056166045
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamRequestGroupOfficersCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::ClassParams = {
		&USteamRequestGroupOfficersCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_USteamRequestGroupOfficersCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamRequestGroupOfficersCallbackProxy.OuterSingleton, Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamRequestGroupOfficersCallbackProxy.OuterSingleton;
	}
	template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<USteamRequestGroupOfficersCallbackProxy>()
	{
		return USteamRequestGroupOfficersCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamRequestGroupOfficersCallbackProxy);
	struct Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_Statics::ScriptStructInfo[] = {
		{ FBPSteamGroupOfficer::StaticStruct, Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics::NewStructOps, TEXT("BPSteamGroupOfficer"), &Z_Registration_Info_UScriptStruct_BPSteamGroupOfficer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPSteamGroupOfficer), 2818366645U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy, USteamRequestGroupOfficersCallbackProxy::StaticClass, TEXT("USteamRequestGroupOfficersCallbackProxy"), &Z_Registration_Info_UClass_USteamRequestGroupOfficersCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamRequestGroupOfficersCallbackProxy), 4095313926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_1163774542(TEXT("/Script/AdvancedSteamSessions"),
		Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AD_5_3_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
