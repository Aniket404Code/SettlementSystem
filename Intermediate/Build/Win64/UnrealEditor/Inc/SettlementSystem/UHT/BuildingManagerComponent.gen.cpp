// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Components/BuildingManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingManagerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UBuildingManagerComponent();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UBuildingManagerComponent_NoRegister();
SETTLEMENTSYSTEM_API UEnum* Z_Construct_UEnum_SettlementSystem_EBuildingType();
SETTLEMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Delegate FOnBuildingConstructed
struct Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics
{
	struct _Script_SettlementSystem_eventOnBuildingConstructed_Parms
	{
		EBuildingType BuildingType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BuildingManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::NewProp_BuildingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::NewProp_BuildingType = { "BuildingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SettlementSystem_eventOnBuildingConstructed_Parms, BuildingType), Z_Construct_UEnum_SettlementSystem_EBuildingType, METADATA_PARAMS(0, nullptr) }; // 865426470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::NewProp_BuildingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::NewProp_BuildingType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SettlementSystem, nullptr, "OnBuildingConstructed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::_Script_SettlementSystem_eventOnBuildingConstructed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::_Script_SettlementSystem_eventOnBuildingConstructed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBuildingConstructed_DelegateWrapper(const FMulticastScriptDelegate& OnBuildingConstructed, EBuildingType BuildingType)
{
	struct _Script_SettlementSystem_eventOnBuildingConstructed_Parms
	{
		EBuildingType BuildingType;
	};
	_Script_SettlementSystem_eventOnBuildingConstructed_Parms Parms;
	Parms.BuildingType=BuildingType;
	OnBuildingConstructed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBuildingConstructed

// Begin Class UBuildingManagerComponent
void UBuildingManagerComponent::StaticRegisterNativesUBuildingManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildingManagerComponent);
UClass* Z_Construct_UClass_UBuildingManagerComponent_NoRegister()
{
	return UBuildingManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UBuildingManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/BuildingManagerComponent.h" },
		{ "ModuleRelativePath", "Components/BuildingManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructedBuildings_MetaData[] = {
		{ "ModuleRelativePath", "Components/BuildingManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuildingConstructed_MetaData[] = {
		{ "ModuleRelativePath", "Components/BuildingManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstructedBuildings_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConstructedBuildings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstructedBuildings;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuildingConstructed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBuildingManagerComponent_Statics::NewProp_ConstructedBuildings_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBuildingManagerComponent_Statics::NewProp_ConstructedBuildings_Inner = { "ConstructedBuildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SettlementSystem_EBuildingType, METADATA_PARAMS(0, nullptr) }; // 865426470
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildingManagerComponent_Statics::NewProp_ConstructedBuildings = { "ConstructedBuildings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingManagerComponent, ConstructedBuildings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructedBuildings_MetaData), NewProp_ConstructedBuildings_MetaData) }; // 865426470
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBuildingManagerComponent_Statics::NewProp_OnBuildingConstructed = { "OnBuildingConstructed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingManagerComponent, OnBuildingConstructed), Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuildingConstructed_MetaData), NewProp_OnBuildingConstructed_MetaData) }; // 3621922540
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildingManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingManagerComponent_Statics::NewProp_ConstructedBuildings_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingManagerComponent_Statics::NewProp_ConstructedBuildings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingManagerComponent_Statics::NewProp_ConstructedBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingManagerComponent_Statics::NewProp_OnBuildingConstructed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBuildingManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildingManagerComponent_Statics::ClassParams = {
	&UBuildingManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBuildingManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildingManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildingManagerComponent()
{
	if (!Z_Registration_Info_UClass_UBuildingManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingManagerComponent.OuterSingleton, Z_Construct_UClass_UBuildingManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingManagerComponent.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<UBuildingManagerComponent>()
{
	return UBuildingManagerComponent::StaticClass();
}
UBuildingManagerComponent::UBuildingManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildingManagerComponent);
UBuildingManagerComponent::~UBuildingManagerComponent() {}
// End Class UBuildingManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingManagerComponent, UBuildingManagerComponent::StaticClass, TEXT("UBuildingManagerComponent"), &Z_Registration_Info_UClass_UBuildingManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingManagerComponent), 928799595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_693677923(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
