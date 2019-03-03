#include "CppLib.h"
#include "Runtime/Core/Public/Misc/ConfigCacheIni.h"
//PublicDependencyModuleNames-> "UnrealEd"
#include "Editor/UnrealEd/Public/Editor.h" 
#include "Editor/UnrealEd/Public/Toolkits/AssetEditorManager.h"
#include "Editor/UnrealEd/Public/LevelEditorViewport.h"
// PublicDependencyModuleNames -> "ContentBrowser"
#include "Editor/ContentBrowser/Public/ContentBrowserModule.h"
#include "Editor/ContentBrowser/Private/SContentBrowser.h"
// PublicDependencyModuleNames -> "AssetRegistry"
#include "Runtime/AssetRegistry/Public/AssetRegistryModule.h"
// PublicDependencyModuleNames -> "PythonScriptPlugin" && "Python"
#include "../Plugins/Experimental/PythonScriptPlugin/Source/PythonScriptPlugin/Private/PythonScriptPlugin.h"

TArray<FString> UCppLib::GetAllProperties(UClass* Class) {
	TArray<FString> Ret;
	if (Class != nullptr) {
		for (TFieldIterator<UProperty> It(Class); It; ++It) {
			UProperty* Property = *It;
			if (Property->HasAnyPropertyFlags(EPropertyFlags::CPF_Edit)) {
				Ret.Add(Property->GetName());
			}
		}
	}
	return Ret;
}

void UCppLib::ExecuteConsoleCommand(FString ConsoleCommand) {
	if (GEditor) {
		UWorld* World = GEditor->GetEditorWorldContext().World();
		if (World) {
			GEditor->Exec(World, *ConsoleCommand, *GLog);
		}
	}
}

TArray<FString> UCppLib::GetSelectedAssets() {
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FAssetData> SelectedAssets;
	ContentBrowserModule.Get().GetSelectedAssets(SelectedAssets);
	TArray<FString> Result;
	for (FAssetData& AssetData : SelectedAssets) {
		Result.Add(AssetData.PackageName.ToString());
	}
	return Result;
}

void UCppLib::SetSelectedAssets(TArray<FString> Paths) {
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FName> PathsName;
	for (FString Path : Paths) {
		PathsName.Add(*Path);
	}
	FARFilter AssetFilter;
	AssetFilter.PackageNames = PathsName;
	TArray<FAssetData> AssetDatas;
	AssetRegistryModule.Get().GetAssets(AssetFilter, AssetDatas);
	ContentBrowserModule.Get().SyncBrowserToAssets(AssetDatas);
}

TArray<FString> UCppLib::GetSelectedFolders() {
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FString> SelectedFolders;
	ContentBrowserModule.Get().GetSelectedFolders(SelectedFolders);
	return SelectedFolders;
}

void UCppLib::SetSelectedFolders(TArray<FString> Paths) {
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	ContentBrowserModule.Get().SyncBrowserToFolders(Paths);
}

void UCppLib::CloseEditorForAssets(TArray<UObject*> Assets) {
	FAssetEditorManager& AssetEditorManager = FAssetEditorManager::Get();
	for (UObject* Asset : Assets) {
		AssetEditorManager.CloseAllEditorsForAsset(Asset);
	}
}

TArray<UObject*> UCppLib::GetAssetsOpenedInEditor() {
	FAssetEditorManager& AssetEditorManager = FAssetEditorManager::Get();
	return AssetEditorManager.GetAllEditedAssets();
}

void UCppLib::SetFolderColor(FString FolderPath, FLinearColor Color) {
	GConfig->SetString(TEXT("PathColor"), *FolderPath, *Color.ToString(), GEditorPerProjectIni);
}

int UCppLib::GetActiveViewportIndex() {
	int Index = 1;
	if (GEditor != nullptr && GCurrentLevelEditingViewportClient != nullptr) {
		GEditor->GetLevelViewportClients().Find(GCurrentLevelEditingViewportClient, Index);
	}
	return Index;
}

// ViewportIndex is affected by the spawning order and not the viewport number. 
//    e.g. Viewport 4 can be the first one if the user spawned it first.
//         And can become the last one if the user open the other ones and then close and re-open Viewport 4.
//    Also, the indexes are confusing.
// 1st Spawned Viewport : Index = 1
// 2nd Spawned Viewport : Index = 5
// 3rd Spawned Viewport : Index = 9
// 4th Spawned Viewport : Index = 13
void UCppLib::SetViewportLocationAndRotation(int ViewportIndex, FVector Location, FRotator Rotation) {
	if (GEditor != nullptr && ViewportIndex < GEditor->GetLevelViewportClients().Num()) {
		FLevelEditorViewportClient* LevelViewportClient = GEditor->GetLevelViewportClients()[ViewportIndex];
		if (LevelViewportClient != nullptr) {
			LevelViewportClient->SetViewLocation(Location);
			LevelViewportClient->SetViewRotation(Rotation);
		}
	}
}

void UCppLib::ExecutePythonScript(FString PythonScript) {
	FPythonScriptPlugin::Get()->ExecPythonCommand(*PythonScript);
}
