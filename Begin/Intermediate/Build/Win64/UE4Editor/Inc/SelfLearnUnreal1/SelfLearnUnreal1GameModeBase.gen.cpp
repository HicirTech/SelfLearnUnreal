// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SelfLearnUnreal1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfLearnUnreal1GameModeBase() {}
// Cross Module References
	SELFLEARNUNREAL1_API UClass* Z_Construct_UClass_ASelfLearnUnreal1GameModeBase_NoRegister();
	SELFLEARNUNREAL1_API UClass* Z_Construct_UClass_ASelfLearnUnreal1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SelfLearnUnreal1();
// End Cross Module References
	void ASelfLearnUnreal1GameModeBase::StaticRegisterNativesASelfLearnUnreal1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASelfLearnUnreal1GameModeBase_NoRegister()
	{
		return ASelfLearnUnreal1GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ASelfLearnUnreal1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_SelfLearnUnreal1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SelfLearnUnreal1GameModeBase.h" },
				{ "ModuleRelativePath", "SelfLearnUnreal1GameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASelfLearnUnreal1GameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASelfLearnUnreal1GameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASelfLearnUnreal1GameModeBase, 1691260694);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASelfLearnUnreal1GameModeBase(Z_Construct_UClass_ASelfLearnUnreal1GameModeBase, &ASelfLearnUnreal1GameModeBase::StaticClass, TEXT("/Script/SelfLearnUnreal1"), TEXT("ASelfLearnUnreal1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelfLearnUnreal1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
