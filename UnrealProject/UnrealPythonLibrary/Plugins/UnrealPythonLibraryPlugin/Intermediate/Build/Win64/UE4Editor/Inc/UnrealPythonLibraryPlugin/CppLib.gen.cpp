// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPythonLibraryPlugin/Public/CppLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppLib() {}
// Cross Module References
	UNREALPYTHONLIBRARYPLUGIN_API UClass* Z_Construct_UClass_UCppLib_NoRegister();
	UNREALPYTHONLIBRARYPLUGIN_API UClass* Z_Construct_UClass_UCppLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnrealPythonLibraryPlugin();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_CloseEditorForAssets();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_ExecutePythonScript();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_GetActiveViewportIndex();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_GetAllProperties();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_GetSelectedAssets();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_GetSelectedFolders();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_SetFolderColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_SetSelectedAssets();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_SetSelectedFolders();
	UNREALPYTHONLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UCppLib::StaticRegisterNativesUCppLib()
	{
		UClass* Class = UCppLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseEditorForAssets", &UCppLib::execCloseEditorForAssets },
			{ "ExecuteConsoleCommand", &UCppLib::execExecuteConsoleCommand },
			{ "ExecutePythonScript", &UCppLib::execExecutePythonScript },
			{ "GetActiveViewportIndex", &UCppLib::execGetActiveViewportIndex },
			{ "GetAllProperties", &UCppLib::execGetAllProperties },
			{ "GetAssetsOpenedInEditor", &UCppLib::execGetAssetsOpenedInEditor },
			{ "GetSelectedAssets", &UCppLib::execGetSelectedAssets },
			{ "GetSelectedFolders", &UCppLib::execGetSelectedFolders },
			{ "SetFolderColor", &UCppLib::execSetFolderColor },
			{ "SetSelectedAssets", &UCppLib::execSetSelectedAssets },
			{ "SetSelectedFolders", &UCppLib::execSetSelectedFolders },
			{ "SetViewportLocationAndRotation", &UCppLib::execSetViewportLocationAndRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics
	{
		struct CppLib_eventCloseEditorForAssets_Parms
		{
			TArray<UObject*> Assets;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Assets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventCloseEditorForAssets_Parms, Assets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::NewProp_Assets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::NewProp_Assets_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "CloseEditorForAssets", sizeof(CppLib_eventCloseEditorForAssets_Parms), Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_CloseEditorForAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics
	{
		struct CppLib_eventExecuteConsoleCommand_Parms
		{
			FString ConsoleCommand;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConsoleCommand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::NewProp_ConsoleCommand = { "ConsoleCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventExecuteConsoleCommand_Parms, ConsoleCommand), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::NewProp_ConsoleCommand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "ExecuteConsoleCommand", sizeof(CppLib_eventExecuteConsoleCommand_Parms), Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics
	{
		struct CppLib_eventExecutePythonScript_Parms
		{
			FString PythonScript;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PythonScript;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::NewProp_PythonScript = { "PythonScript", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventExecutePythonScript_Parms, PythonScript), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::NewProp_PythonScript,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "ExecutePythonScript", sizeof(CppLib_eventExecutePythonScript_Parms), Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_ExecutePythonScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_ExecutePythonScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics
	{
		struct CppLib_eventGetActiveViewportIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetActiveViewportIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetActiveViewportIndex", sizeof(CppLib_eventGetActiveViewportIndex_Parms), Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetActiveViewportIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetActiveViewportIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetAllProperties_Statics
	{
		struct CppLib_eventGetAllProperties_Parms
		{
			UClass* Class;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetAllProperties_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetAllProperties_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetAllProperties", sizeof(CppLib_eventGetAllProperties_Parms), Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetAllProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics
	{
		struct CppLib_eventGetAssetsOpenedInEditor_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetAssetsOpenedInEditor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetAssetsOpenedInEditor", sizeof(CppLib_eventGetAssetsOpenedInEditor_Parms), Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics
	{
		struct CppLib_eventGetSelectedAssets_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetSelectedAssets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetSelectedAssets", sizeof(CppLib_eventGetSelectedAssets_Parms), Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetSelectedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics
	{
		struct CppLib_eventGetSelectedFolders_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetSelectedFolders_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetSelectedFolders", sizeof(CppLib_eventGetSelectedFolders_Parms), Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetSelectedFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_SetFolderColor_Statics
	{
		struct CppLib_eventSetFolderColor_Parms
		{
			FString FolderPath;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetFolderColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetFolderColor_Parms, FolderPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::NewProp_FolderPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "SetFolderColor", sizeof(CppLib_eventSetFolderColor_Parms), Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_SetFolderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics
	{
		struct CppLib_eventSetSelectedAssets_Parms
		{
			TArray<FString> Paths;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetSelectedAssets_Parms, Paths), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::NewProp_Paths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::NewProp_Paths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "SetSelectedAssets", sizeof(CppLib_eventSetSelectedAssets_Parms), Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_SetSelectedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics
	{
		struct CppLib_eventSetSelectedFolders_Parms
		{
			TArray<FString> Paths;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetSelectedFolders_Parms, Paths), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::NewProp_Paths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::NewProp_Paths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "SetSelectedFolders", sizeof(CppLib_eventSetSelectedFolders_Parms), Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_SetSelectedFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics
	{
		struct CppLib_eventSetViewportLocationAndRotation_Parms
		{
			int32 ViewportIndex;
			FVector Location;
			FRotator Rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ViewportIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetViewportLocationAndRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetViewportLocationAndRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::NewProp_ViewportIndex = { "ViewportIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetViewportLocationAndRotation_Parms, ViewportIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::NewProp_ViewportIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "SetViewportLocationAndRotation", sizeof(CppLib_eventSetViewportLocationAndRotation_Parms), Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCppLib_NoRegister()
	{
		return UCppLib::StaticClass();
	}
	struct Z_Construct_UClass_UCppLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCppLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPythonLibraryPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCppLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCppLib_CloseEditorForAssets, "CloseEditorForAssets" }, // 3894972112
		{ &Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand, "ExecuteConsoleCommand" }, // 2580139536
		{ &Z_Construct_UFunction_UCppLib_ExecutePythonScript, "ExecutePythonScript" }, // 659974643
		{ &Z_Construct_UFunction_UCppLib_GetActiveViewportIndex, "GetActiveViewportIndex" }, // 221971176
		{ &Z_Construct_UFunction_UCppLib_GetAllProperties, "GetAllProperties" }, // 771352955
		{ &Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor, "GetAssetsOpenedInEditor" }, // 3139934490
		{ &Z_Construct_UFunction_UCppLib_GetSelectedAssets, "GetSelectedAssets" }, // 2307184420
		{ &Z_Construct_UFunction_UCppLib_GetSelectedFolders, "GetSelectedFolders" }, // 3493203680
		{ &Z_Construct_UFunction_UCppLib_SetFolderColor, "SetFolderColor" }, // 370698228
		{ &Z_Construct_UFunction_UCppLib_SetSelectedAssets, "SetSelectedAssets" }, // 1520721929
		{ &Z_Construct_UFunction_UCppLib_SetSelectedFolders, "SetSelectedFolders" }, // 2939781177
		{ &Z_Construct_UFunction_UCppLib_SetViewportLocationAndRotation, "SetViewportLocationAndRotation" }, // 324262532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CppLib.h" },
		{ "ModuleRelativePath", "Public/CppLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCppLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCppLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCppLib_Statics::ClassParams = {
		&UCppLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCppLib_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCppLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCppLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCppLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCppLib, 3927674317);
	template<> UNREALPYTHONLIBRARYPLUGIN_API UClass* StaticClass<UCppLib>()
	{
		return UCppLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCppLib(Z_Construct_UClass_UCppLib, &UCppLib::StaticClass, TEXT("/Script/UnrealPythonLibraryPlugin"), TEXT("UCppLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCppLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
