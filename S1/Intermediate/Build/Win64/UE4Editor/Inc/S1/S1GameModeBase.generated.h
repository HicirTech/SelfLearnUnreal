// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef S1_S1GameModeBase_generated_h
#error "S1GameModeBase.generated.h already included, missing '#pragma once' in S1GameModeBase.h"
#endif
#define S1_S1GameModeBase_generated_h

#define S1_Source_S1_S1GameModeBase_h_15_RPC_WRAPPERS
#define S1_Source_S1_S1GameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define S1_Source_S1_S1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAS1GameModeBase(); \
	friend S1_API class UClass* Z_Construct_UClass_AS1GameModeBase(); \
public: \
	DECLARE_CLASS(AS1GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/S1"), NO_API) \
	DECLARE_SERIALIZER(AS1GameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define S1_Source_S1_S1GameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAS1GameModeBase(); \
	friend S1_API class UClass* Z_Construct_UClass_AS1GameModeBase(); \
public: \
	DECLARE_CLASS(AS1GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/S1"), NO_API) \
	DECLARE_SERIALIZER(AS1GameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define S1_Source_S1_S1GameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AS1GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AS1GameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AS1GameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AS1GameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AS1GameModeBase(AS1GameModeBase&&); \
	NO_API AS1GameModeBase(const AS1GameModeBase&); \
public:


#define S1_Source_S1_S1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AS1GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AS1GameModeBase(AS1GameModeBase&&); \
	NO_API AS1GameModeBase(const AS1GameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AS1GameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AS1GameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AS1GameModeBase)


#define S1_Source_S1_S1GameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define S1_Source_S1_S1GameModeBase_h_12_PROLOG
#define S1_Source_S1_S1GameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	S1_Source_S1_S1GameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	S1_Source_S1_S1GameModeBase_h_15_RPC_WRAPPERS \
	S1_Source_S1_S1GameModeBase_h_15_INCLASS \
	S1_Source_S1_S1GameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define S1_Source_S1_S1GameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	S1_Source_S1_S1GameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	S1_Source_S1_S1GameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	S1_Source_S1_S1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	S1_Source_S1_S1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID S1_Source_S1_S1GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
