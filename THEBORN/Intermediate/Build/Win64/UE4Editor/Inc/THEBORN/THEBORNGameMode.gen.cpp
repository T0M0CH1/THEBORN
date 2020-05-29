// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "THEBORN/THEBORNGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTHEBORNGameMode() {}
// Cross Module References
	THEBORN_API UClass* Z_Construct_UClass_ATHEBORNGameMode_NoRegister();
	THEBORN_API UClass* Z_Construct_UClass_ATHEBORNGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_THEBORN();
// End Cross Module References
	void ATHEBORNGameMode::StaticRegisterNativesATHEBORNGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATHEBORNGameMode_NoRegister()
	{
		return ATHEBORNGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATHEBORNGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATHEBORNGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_THEBORN,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATHEBORNGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "THEBORNGameMode.h" },
		{ "ModuleRelativePath", "THEBORNGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATHEBORNGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATHEBORNGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATHEBORNGameMode_Statics::ClassParams = {
		&ATHEBORNGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATHEBORNGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATHEBORNGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATHEBORNGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATHEBORNGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATHEBORNGameMode, 2175252167);
	template<> THEBORN_API UClass* StaticClass<ATHEBORNGameMode>()
	{
		return ATHEBORNGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATHEBORNGameMode(Z_Construct_UClass_ATHEBORNGameMode, &ATHEBORNGameMode::StaticClass, TEXT("/Script/THEBORN"), TEXT("ATHEBORNGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATHEBORNGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
