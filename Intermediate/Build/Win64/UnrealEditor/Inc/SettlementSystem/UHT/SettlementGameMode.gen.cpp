// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Game/SettlementGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementGameMode();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Class ASettlementGameMode
void ASettlementGameMode::StaticRegisterNativesASettlementGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASettlementGameMode);
UClass* Z_Construct_UClass_ASettlementGameMode_NoRegister()
{
	return ASettlementGameMode::StaticClass();
}
struct Z_Construct_UClass_ASettlementGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/SettlementGameMode.h" },
		{ "ModuleRelativePath", "Game/SettlementGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASettlementGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASettlementGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASettlementGameMode_Statics::ClassParams = {
	&ASettlementGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASettlementGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASettlementGameMode()
{
	if (!Z_Registration_Info_UClass_ASettlementGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASettlementGameMode.OuterSingleton, Z_Construct_UClass_ASettlementGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASettlementGameMode.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<ASettlementGameMode>()
{
	return ASettlementGameMode::StaticClass();
}
ASettlementGameMode::ASettlementGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASettlementGameMode);
ASettlementGameMode::~ASettlementGameMode() {}
// End Class ASettlementGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASettlementGameMode, ASettlementGameMode::StaticClass, TEXT("ASettlementGameMode"), &Z_Registration_Info_UClass_ASettlementGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASettlementGameMode), 1188414384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameMode_h_4180315691(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
