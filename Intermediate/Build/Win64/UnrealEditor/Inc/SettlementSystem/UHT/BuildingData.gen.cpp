// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Buildings/BuildingData.h"
#include "SettlementSystem/Types/ResourceTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UBuildingData();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UBuildingData_NoRegister();
SETTLEMENTSYSTEM_API UEnum* Z_Construct_UEnum_SettlementSystem_EBuildingType();
SETTLEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FResourceAmount();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Class UBuildingData
void UBuildingData::StaticRegisterNativesUBuildingData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildingData);
UClass* Z_Construct_UClass_UBuildingData_NoRegister()
{
	return UBuildingData::StaticClass();
}
struct Z_Construct_UClass_UBuildingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Buildings/BuildingData.h" },
		{ "ModuleRelativePath", "Buildings/BuildingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingType_MetaData[] = {
		{ "Category", "BuildingData" },
		{ "ModuleRelativePath", "Buildings/BuildingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructionCost_MetaData[] = {
		{ "Category", "BuildingData" },
		{ "ModuleRelativePath", "Buildings/BuildingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredBuildings_MetaData[] = {
		{ "Category", "BuildingData" },
		{ "ModuleRelativePath", "Buildings/BuildingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionIntervalDays_MetaData[] = {
		{ "Category", "BuildingData" },
		{ "ModuleRelativePath", "Buildings/BuildingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionOutput_MetaData[] = {
		{ "Category", "BuildingData" },
		{ "ModuleRelativePath", "Buildings/BuildingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstructionCost_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstructionCost;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredBuildings_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredBuildings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredBuildings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProductionIntervalDays;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductionOutput_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProductionOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_BuildingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_BuildingType = { "BuildingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingData, BuildingType), Z_Construct_UEnum_SettlementSystem_EBuildingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingType_MetaData), NewProp_BuildingType_MetaData) }; // 865426470
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_ConstructionCost_Inner = { "ConstructionCost", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResourceAmount, METADATA_PARAMS(0, nullptr) }; // 3695090056
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_ConstructionCost = { "ConstructionCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingData, ConstructionCost), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructionCost_MetaData), NewProp_ConstructionCost_MetaData) }; // 3695090056
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_RequiredBuildings_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_RequiredBuildings_Inner = { "RequiredBuildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SettlementSystem_EBuildingType, METADATA_PARAMS(0, nullptr) }; // 865426470
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_RequiredBuildings = { "RequiredBuildings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingData, RequiredBuildings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredBuildings_MetaData), NewProp_RequiredBuildings_MetaData) }; // 865426470
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_ProductionIntervalDays = { "ProductionIntervalDays", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingData, ProductionIntervalDays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionIntervalDays_MetaData), NewProp_ProductionIntervalDays_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_ProductionOutput_Inner = { "ProductionOutput", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResourceAmount, METADATA_PARAMS(0, nullptr) }; // 3695090056
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildingData_Statics::NewProp_ProductionOutput = { "ProductionOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingData, ProductionOutput), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionOutput_MetaData), NewProp_ProductionOutput_MetaData) }; // 3695090056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_BuildingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_BuildingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_ConstructionCost_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_ConstructionCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_RequiredBuildings_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_RequiredBuildings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_RequiredBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_ProductionIntervalDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_ProductionOutput_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingData_Statics::NewProp_ProductionOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBuildingData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildingData_Statics::ClassParams = {
	&UBuildingData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBuildingData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingData_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildingData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildingData()
{
	if (!Z_Registration_Info_UClass_UBuildingData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingData.OuterSingleton, Z_Construct_UClass_UBuildingData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingData.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<UBuildingData>()
{
	return UBuildingData::StaticClass();
}
UBuildingData::UBuildingData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildingData);
UBuildingData::~UBuildingData() {}
// End Class UBuildingData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingData, UBuildingData::StaticClass, TEXT("UBuildingData"), &Z_Registration_Info_UClass_UBuildingData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingData), 1320182792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_2096371527(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
