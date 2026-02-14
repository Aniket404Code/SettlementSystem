// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Settlement/SettlementActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementActorBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementActorBase();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementActorBase_NoRegister();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UResourceComponent_NoRegister();
SETTLEMENTSYSTEM_API UEnum* Z_Construct_UEnum_SettlementSystem_EBuildingType();
SETTLEMENTSYSTEM_API UEnum* Z_Construct_UEnum_SettlementSystem_EResourceType();
SETTLEMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature();
SETTLEMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Delegate FOnBuildingConstructedUI
struct Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics
{
	struct _Script_SettlementSystem_eventOnBuildingConstructedUI_Parms
	{
		EBuildingType BuildingType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify when building constructed\n" },
#endif
		{ "ModuleRelativePath", "Settlement/SettlementActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify when building constructed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::NewProp_BuildingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::NewProp_BuildingType = { "BuildingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SettlementSystem_eventOnBuildingConstructedUI_Parms, BuildingType), Z_Construct_UEnum_SettlementSystem_EBuildingType, METADATA_PARAMS(0, nullptr) }; // 865426470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::NewProp_BuildingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::NewProp_BuildingType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SettlementSystem, nullptr, "OnBuildingConstructedUI__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::_Script_SettlementSystem_eventOnBuildingConstructedUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::_Script_SettlementSystem_eventOnBuildingConstructedUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBuildingConstructedUI_DelegateWrapper(const FMulticastScriptDelegate& OnBuildingConstructedUI, EBuildingType BuildingType)
{
	struct _Script_SettlementSystem_eventOnBuildingConstructedUI_Parms
	{
		EBuildingType BuildingType;
	};
	_Script_SettlementSystem_eventOnBuildingConstructedUI_Parms Parms;
	Parms.BuildingType=BuildingType;
	OnBuildingConstructedUI.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBuildingConstructedUI

// Begin Delegate FOnResourceChangedUI
struct Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics
{
	struct _Script_SettlementSystem_eventOnResourceChangedUI_Parms
	{
		EResourceType ResourceType;
		int32 NewAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify when resource amount changes\n" },
#endif
		{ "ModuleRelativePath", "Settlement/SettlementActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify when resource amount changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SettlementSystem_eventOnResourceChangedUI_Parms, ResourceType), Z_Construct_UEnum_SettlementSystem_EResourceType, METADATA_PARAMS(0, nullptr) }; // 659145580
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::NewProp_NewAmount = { "NewAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SettlementSystem_eventOnResourceChangedUI_Parms, NewAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::NewProp_NewAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SettlementSystem, nullptr, "OnResourceChangedUI__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::_Script_SettlementSystem_eventOnResourceChangedUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::_Script_SettlementSystem_eventOnResourceChangedUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnResourceChangedUI_DelegateWrapper(const FMulticastScriptDelegate& OnResourceChangedUI, EResourceType ResourceType, int32 NewAmount)
{
	struct _Script_SettlementSystem_eventOnResourceChangedUI_Parms
	{
		EResourceType ResourceType;
		int32 NewAmount;
	};
	_Script_SettlementSystem_eventOnResourceChangedUI_Parms Parms;
	Parms.ResourceType=ResourceType;
	Parms.NewAmount=NewAmount;
	OnResourceChangedUI.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnResourceChangedUI

// Begin Class ASettlementActorBase
void ASettlementActorBase::StaticRegisterNativesASettlementActorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASettlementActorBase);
UClass* Z_Construct_UClass_ASettlementActorBase_NoRegister()
{
	return ASettlementActorBase::StaticClass();
}
struct Z_Construct_UClass_ASettlementActorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settlement/SettlementActorBase.h" },
		{ "ModuleRelativePath", "Settlement/SettlementActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuildingConstructedUI_MetaData[] = {
		{ "Category", "Settlement|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fired when building constructed\n" },
#endif
		{ "ModuleRelativePath", "Settlement/SettlementActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when building constructed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResourceChangedUI_MetaData[] = {
		{ "Category", "Settlement|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fired when resource amount changes\n" },
#endif
		{ "ModuleRelativePath", "Settlement/SettlementActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when resource amount changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceComponent_MetaData[] = {
		{ "Category", "SettlementActorBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settlement/SettlementActorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuildingConstructedUI;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResourceChangedUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResourceComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASettlementActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASettlementActorBase_Statics::NewProp_OnBuildingConstructedUI = { "OnBuildingConstructedUI", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlementActorBase, OnBuildingConstructedUI), Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuildingConstructedUI_MetaData), NewProp_OnBuildingConstructedUI_MetaData) }; // 4210306965
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASettlementActorBase_Statics::NewProp_OnResourceChangedUI = { "OnResourceChangedUI", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlementActorBase, OnResourceChangedUI), Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResourceChangedUI_MetaData), NewProp_OnResourceChangedUI_MetaData) }; // 496681662
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASettlementActorBase_Statics::NewProp_ResourceComponent = { "ResourceComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlementActorBase, ResourceComponent), Z_Construct_UClass_UResourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceComponent_MetaData), NewProp_ResourceComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASettlementActorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlementActorBase_Statics::NewProp_OnBuildingConstructedUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlementActorBase_Statics::NewProp_OnResourceChangedUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlementActorBase_Statics::NewProp_ResourceComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementActorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASettlementActorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementActorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASettlementActorBase_Statics::ClassParams = {
	&ASettlementActorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASettlementActorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementActorBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASettlementActorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASettlementActorBase()
{
	if (!Z_Registration_Info_UClass_ASettlementActorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASettlementActorBase.OuterSingleton, Z_Construct_UClass_ASettlementActorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASettlementActorBase.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<ASettlementActorBase>()
{
	return ASettlementActorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASettlementActorBase);
ASettlementActorBase::~ASettlementActorBase() {}
// End Class ASettlementActorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASettlementActorBase, ASettlementActorBase::StaticClass, TEXT("ASettlementActorBase"), &Z_Registration_Info_UClass_ASettlementActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASettlementActorBase), 3474591284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_3826538822(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
