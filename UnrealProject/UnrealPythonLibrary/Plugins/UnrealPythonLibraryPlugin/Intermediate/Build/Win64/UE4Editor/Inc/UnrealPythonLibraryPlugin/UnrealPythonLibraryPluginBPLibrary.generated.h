// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPYTHONLIBRARYPLUGIN_UnrealPythonLibraryPluginBPLibrary_generated_h
#error "UnrealPythonLibraryPluginBPLibrary.generated.h already included, missing '#pragma once' in UnrealPythonLibraryPluginBPLibrary.h"
#endif
#define UNREALPYTHONLIBRARYPLUGIN_UnrealPythonLibraryPluginBPLibrary_generated_h

#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnrealPythonLibraryPluginSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UUnrealPythonLibraryPluginBPLibrary::UnrealPythonLibraryPluginSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnrealPythonLibraryPluginSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UUnrealPythonLibraryPluginBPLibrary::UnrealPythonLibraryPluginSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealPythonLibraryPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UUnrealPythonLibraryPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UUnrealPythonLibraryPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPythonLibraryPlugin"), NO_API) \
	DECLARE_SERIALIZER(UUnrealPythonLibraryPluginBPLibrary)


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealPythonLibraryPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UUnrealPythonLibraryPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UUnrealPythonLibraryPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPythonLibraryPlugin"), NO_API) \
	DECLARE_SERIALIZER(UUnrealPythonLibraryPluginBPLibrary)


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealPythonLibraryPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealPythonLibraryPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealPythonLibraryPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealPythonLibraryPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealPythonLibraryPluginBPLibrary(UUnrealPythonLibraryPluginBPLibrary&&); \
	NO_API UUnrealPythonLibraryPluginBPLibrary(const UUnrealPythonLibraryPluginBPLibrary&); \
public:


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealPythonLibraryPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealPythonLibraryPluginBPLibrary(UUnrealPythonLibraryPluginBPLibrary&&); \
	NO_API UUnrealPythonLibraryPluginBPLibrary(const UUnrealPythonLibraryPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealPythonLibraryPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealPythonLibraryPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealPythonLibraryPluginBPLibrary)


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_25_PROLOG
#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_RPC_WRAPPERS \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_INCLASS \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UnrealPythonLibraryPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPYTHONLIBRARYPLUGIN_API UClass* StaticClass<class UUnrealPythonLibraryPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_UnrealPythonLibraryPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
