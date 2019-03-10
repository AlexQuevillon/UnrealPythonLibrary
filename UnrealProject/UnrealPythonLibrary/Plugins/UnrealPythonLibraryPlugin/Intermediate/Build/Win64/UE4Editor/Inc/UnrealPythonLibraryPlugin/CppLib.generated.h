// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
struct FLinearColor;
class UObject;
#ifdef UNREALPYTHONLIBRARYPLUGIN_CppLib_generated_h
#error "CppLib.generated.h already included, missing '#pragma once' in CppLib.h"
#endif
#define UNREALPYTHONLIBRARYPLUGIN_CppLib_generated_h

#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecutePythonScript) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PythonScript); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::ExecutePythonScript(Z_Param_PythonScript); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveViewportIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCppLib::GetActiveViewportIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewportLocationAndRotation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ViewportIndex); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::SetViewportLocationAndRotation(Z_Param_ViewportIndex,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFolderColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FolderPath); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::SetFolderColor(Z_Param_FolderPath,Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsOpenedInEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UCppLib::GetAssetsOpenedInEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseEditorForAssets) \
	{ \
		P_GET_TARRAY(UObject*,Z_Param_Assets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::CloseEditorForAssets(Z_Param_Assets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedFolders) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Paths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::SetSelectedFolders(Z_Param_Paths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedAssets) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Paths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::SetSelectedAssets(Z_Param_Paths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedFolders) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetSelectedFolders(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetSelectedAssets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteConsoleCommand) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ConsoleCommand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::ExecuteConsoleCommand(Z_Param_ConsoleCommand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllProperties) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetAllProperties(Z_Param_Class); \
		P_NATIVE_END; \
	}


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecutePythonScript) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PythonScript); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::ExecutePythonScript(Z_Param_PythonScript); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveViewportIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCppLib::GetActiveViewportIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewportLocationAndRotation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ViewportIndex); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::SetViewportLocationAndRotation(Z_Param_ViewportIndex,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFolderColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FolderPath); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::SetFolderColor(Z_Param_FolderPath,Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsOpenedInEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UCppLib::GetAssetsOpenedInEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseEditorForAssets) \
	{ \
		P_GET_TARRAY(UObject*,Z_Param_Assets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::CloseEditorForAssets(Z_Param_Assets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedFolders) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Paths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::SetSelectedFolders(Z_Param_Paths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedAssets) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Paths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::SetSelectedAssets(Z_Param_Paths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedFolders) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetSelectedFolders(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetSelectedAssets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteConsoleCommand) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ConsoleCommand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCppLib::ExecuteConsoleCommand(Z_Param_ConsoleCommand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllProperties) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetAllProperties(Z_Param_Class); \
		P_NATIVE_END; \
	}


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCppLib(); \
	friend struct Z_Construct_UClass_UCppLib_Statics; \
public: \
	DECLARE_CLASS(UCppLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPythonLibraryPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCppLib)


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUCppLib(); \
	friend struct Z_Construct_UClass_UCppLib_Statics; \
public: \
	DECLARE_CLASS(UCppLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPythonLibraryPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCppLib)


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCppLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCppLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppLib(UCppLib&&); \
	NO_API UCppLib(const UCppLib&); \
public:


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCppLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppLib(UCppLib&&); \
	NO_API UCppLib(const UCppLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCppLib)


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_PRIVATE_PROPERTY_OFFSET
#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_6_PROLOG
#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_PRIVATE_PROPERTY_OFFSET \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_RPC_WRAPPERS \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_INCLASS \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_PRIVATE_PROPERTY_OFFSET \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_INCLASS_NO_PURE_DECLS \
	UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPYTHONLIBRARYPLUGIN_API UClass* StaticClass<class UCppLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPythonLibrary_Plugins_UnrealPythonLibraryPlugin_Source_UnrealPythonLibraryPlugin_Public_CppLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
