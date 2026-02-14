// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Types/ResourceTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceTypes() {}

// Begin Cross Module References
SETTLEMENTSYSTEM_API UEnum* Z_Construct_UEnum_SettlementSystem_EResourceType();
SETTLEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FResourceAmount();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Enum EResourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResourceType;
static UEnum* EResourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EResourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SettlementSystem_EResourceType, (UObject*)Z_Construct_UPackage__Script_SettlementSystem(), TEXT("EResourceType"));
	}
	return Z_Registration_Info_UEnum_EResourceType.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UEnum* StaticEnum<EResourceType>()
{
	return EResourceType_StaticEnum();
}
struct Z_Construct_UEnum_SettlementSystem_EResourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Food.Name", "EResourceType::Food" },
		{ "Gold.Name", "EResourceType::Gold" },
		{ "ModuleRelativePath", "Types/ResourceTypes.h" },
		{ "Stone.Name", "EResourceType::Stone" },
		{ "Weaponry.Name", "EResourceType::Weaponry" },
		{ "Wood.Name", "EResourceType::Wood" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EResourceType::Wood", (int64)EResourceType::Wood },
		{ "EResourceType::Stone", (int64)EResourceType::Stone },
		{ "EResourceType::Gold", (int64)EResourceType::Gold },
		{ "EResourceType::Food", (int64)EResourceType::Food },
		{ "EResourceType::Weaponry", (int64)EResourceType::Weaponry },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SettlementSystem_EResourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SettlementSystem,
	nullptr,
	"EResourceType",
	"EResourceType",
	Z_Construct_UEnum_SettlementSystem_EResourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SettlementSystem_EResourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SettlementSystem_EResourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SettlementSystem_EResourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SettlementSystem_EResourceType()
{
	if (!Z_Registration_Info_UEnum_EResourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResourceType.InnerSingleton, Z_Construct_UEnum_SettlementSystem_EResourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EResourceType.InnerSingleton;
}
// End Enum EResourceType

// Begin ScriptStruct FResourceAmount
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResourceAmount;
class UScriptStruct* FResourceAmount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResourceAmount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResourceAmount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResourceAmount, (UObject*)Z_Construct_UPackage__Script_SettlementSystem(), TEXT("ResourceAmount"));
	}
	return Z_Registration_Info_UScriptStruct_ResourceAmount.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UScriptStruct* StaticStruct<FResourceAmount>()
{
	return FResourceAmount::StaticStruct();
}
struct Z_Construct_UScriptStruct_FResourceAmount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Types/ResourceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ResourceAmount" },
		{ "ModuleRelativePath", "Types/ResourceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "ResourceAmount" },
		{ "ModuleRelativePath", "Types/ResourceTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResourceAmount>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResourceAmount_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResourceAmount_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceAmount, Type), Z_Construct_UEnum_SettlementSystem_EResourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 659145580
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResourceAmount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceAmount, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResourceAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceAmount_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceAmount_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceAmount_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResourceAmount_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
	nullptr,
	&NewStructOps,
	"ResourceAmount",
	Z_Construct_UScriptStruct_FResourceAmount_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceAmount_Statics::PropPointers),
	sizeof(FResourceAmount),
	alignof(FResourceAmount),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceAmount_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FResourceAmount_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FResourceAmount()
{
	if (!Z_Registration_Info_UScriptStruct_ResourceAmount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResourceAmount.InnerSingleton, Z_Construct_UScriptStruct_FResourceAmount_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ResourceAmount.InnerSingleton;
}
// End ScriptStruct FResourceAmount

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Types_ResourceTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EResourceType_StaticEnum, TEXT("EResourceType"), &Z_Registration_Info_UEnum_EResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 659145580U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FResourceAmount::StaticStruct, Z_Construct_UScriptStruct_FResourceAmount_Statics::NewStructOps, TEXT("ResourceAmount"), &Z_Registration_Info_UScriptStruct_ResourceAmount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResourceAmount), 3695090056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Types_ResourceTypes_h_1606207096(TEXT("/Script/SettlementSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Types_ResourceTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Types_ResourceTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Types_ResourceTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Types_ResourceTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
