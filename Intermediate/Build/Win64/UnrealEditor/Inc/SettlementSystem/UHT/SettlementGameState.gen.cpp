// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Game/SettlementGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementGameState();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Class ASettlementGameState
void ASettlementGameState::StaticRegisterNativesASettlementGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASettlementGameState);
UClass* Z_Construct_UClass_ASettlementGameState_NoRegister()
{
	return ASettlementGameState::StaticClass();
}
struct Z_Construct_UClass_ASettlementGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/SettlementGameState.h" },
		{ "ModuleRelativePath", "Game/SettlementGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASettlementGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASettlementGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASettlementGameState_Statics::ClassParams = {
	&ASettlementGameState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ASettlementGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASettlementGameState()
{
	if (!Z_Registration_Info_UClass_ASettlementGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASettlementGameState.OuterSingleton, Z_Construct_UClass_ASettlementGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASettlementGameState.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<ASettlementGameState>()
{
	return ASettlementGameState::StaticClass();
}
ASettlementGameState::ASettlementGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASettlementGameState);
ASettlementGameState::~ASettlementGameState() {}
// End Class ASettlementGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASettlementGameState, ASettlementGameState::StaticClass, TEXT("ASettlementGameState"), &Z_Registration_Info_UClass_ASettlementGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASettlementGameState), 1944518201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_3152058109(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
