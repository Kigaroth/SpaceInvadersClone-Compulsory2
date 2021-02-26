// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvadersClone/SpaceInvadersCloneGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceInvadersCloneGameModeBase() {}
// Cross Module References
	SPACEINVADERSCLONE_API UClass* Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_NoRegister();
	SPACEINVADERSCLONE_API UClass* Z_Construct_UClass_ASpaceInvadersCloneGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceInvadersClone();
// End Cross Module References
	void ASpaceInvadersCloneGameModeBase::StaticRegisterNativesASpaceInvadersCloneGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_NoRegister()
	{
		return ASpaceInvadersCloneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvadersClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceInvadersCloneGameModeBase.h" },
		{ "ModuleRelativePath", "SpaceInvadersCloneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceInvadersCloneGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_Statics::ClassParams = {
		&ASpaceInvadersCloneGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceInvadersCloneGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceInvadersCloneGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceInvadersCloneGameModeBase, 3545227095);
	template<> SPACEINVADERSCLONE_API UClass* StaticClass<ASpaceInvadersCloneGameModeBase>()
	{
		return ASpaceInvadersCloneGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceInvadersCloneGameModeBase(Z_Construct_UClass_ASpaceInvadersCloneGameModeBase, &ASpaceInvadersCloneGameModeBase::StaticClass, TEXT("/Script/SpaceInvadersClone"), TEXT("ASpaceInvadersCloneGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceInvadersCloneGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
