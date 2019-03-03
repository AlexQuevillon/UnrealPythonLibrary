# unreal.AssetToolsHelpers
#   https://api.unrealengine.com/INT/PythonAPI/class/AssetToolsHelpers.html

# unreal.AssetTools
#   https://api.unrealengine.com/INT/PythonAPI/class/AssetTools.html

# unreal.EditorAssetLibrary
#   https://api.unrealengine.com/INT/PythonAPI/class/EditorAssetLibrary.html
#       All operations can be slow. The editor should not be in play in editor mode. It will not work on assets of the type level.
#       Possible Directory Paths:
#           '/Game/MyFolder'
#           '/Game/MyFolder/'
#       Possible Asset Paths:
#           '/Game/MyFolder/MyAsset.MyAsset'
#           '/Game/MyFolder/MyAsset'

# unreal.AssetRenameData
#   https://api.unrealengine.com/INT/PythonAPI/class/AssetRenameData.html

# unreal.Package
#   https://api.unrealengine.com/INT/PythonAPI/class/Package.html

# unreal.EditorLoadingAndSavingUtils
#   https://api.unrealengine.com/INT/PythonAPI/class/EditorLoadingAndSavingUtils.html

# unreal.AssetImportTask
#   https://api.unrealengine.com/INT/PythonAPI/class/AssetImportTask.html

# unreal.AssetTools
#    https://api.unrealengine.com/INT/PythonAPI/class/AssetTools.html

# unreal.FbxImportUI
#   https://api.unrealengine.com/INT/PythonAPI/class/FbxImportUI.html

# unreal.FbxMeshImportData
#   https://api.unrealengine.com/INT/PythonAPI/class/FbxMeshImportData.html

# unreal.FbxStaticMeshImportData
#   https://api.unrealengine.com/INT/PythonAPI/class/FbxStaticMeshImportData.html

# unreal.FbxSkeletalMeshImportData
#   https://api.unrealengine.com/INT/PythonAPI/class/FbxSkeletalMeshImportData.html

# unreal.FbxAssetImportData
#   https://api.unrealengine.com/INT/PythonAPI/class/FbxAssetImportData.html

# unreal.FbxAnimSequenceImportData
#   https://api.unrealengine.com/INT/PythonAPI/class/FbxAnimSequenceImportData.html

# unreal.FBXAnimationLengthImportType
#   https://api.unrealengine.com/INT/PythonAPI/class/FBXAnimationLengthImportType.html

# unreal.LinearColor
#   https://api.unrealengine.com/INT/PythonAPI/class/LinearColor.html

# unreal.Factory
#   https://api.unrealengine.com/INT/PythonAPI/class/Factory.html

import unreal

# asset_path: str : Path of asset to create
# unique_name: bool : If True, will add a number at the end of the asset name until unique
# asset_class: obj unreal.Class : The asset class
# asset_factory: obj unreal.Factory : The associated factory of the class.
# return: obj : The created asset
def createGenericAsset(asset_path='', unique_name=True, asset_class=None, asset_factory=None):
    if unique_name:
        asset_path, asset_name = unreal.AssetToolsHelpers.get_asset_tools().create_unique_asset_name(base_package_name=asset_path, suffix='')
    if not unreal.EditorAssetLibrary.does_asset_exist(asset_path=asset_path):
        path = asset_path.rsplit('/', 1)[0]
        name = asset_path.rsplit('/', 1)[1]
        return unreal.AssetToolsHelpers.get_asset_tools().create_asset(asset_name=name, package_path=path, asset_class=asset_class, factory=asset_factory)
    return unreal.load_asset(asset_path)


# paths: List of str : Asset paths
def showAssetsInContentBrowser(paths=[]):
    unreal.EditorAssetLibrary.sync_browser_to_objects(asset_paths=paths)


# paths: List of str : Asset paths
def openAssets(paths=[]):
    loaded_assets = [getPackageFromPath(x) for x in paths]
    unreal.AssetToolsHelpers.get_asset_tools().open_editor_for_assets(assets=loaded_assets)


# path: str : Directory path
# return: bool : True if the operation succeeds
def createDirectory(path=''):
    return unreal.EditorAssetLibrary.make_directory(directory_path=path)


# from_dir: str : Directory path to duplicate
# to_dir: str : Duplicated directory path
# return: bool : True if the operation succeeds
def duplicateDirectory(from_dir='', to_dir=''):
    return unreal.EditorAssetLibrary.duplicate_directory(source_directory_path=from_dir, destination_directory_path=to_dir)


# path: str : Directory path
# return: bool : True if the operation succeeds
def deleteDirectory(path=''):
    return unreal.EditorAssetLibrary.delete_directory(directory_path=path)


# path: str : Directory path
# return: bool : True if the directory exists
def directoryExist(path=''):
    return unreal.EditorAssetLibrary.does_directory_exist(directory_path=path)


# from_dir: str : Directory path to rename
# to_dir: str : Renamed directory path
# return: bool : True if the operation succeeds
def renameDirectory(from_dir='', to_dir=''):
    return unreal.EditorAssetLibrary.rename_directory(source_directory_path=from_dir, destination_directory_path=to_dir)


# from_path str : Asset path to duplicate
# to_path: str : Duplicated asset path
# return: bool : True if the operation succeeds
def duplicateAsset(from_path='', to_path=''):
    return unreal.EditorAssetLibrary.duplicate_asset(source_asset_path=from_path, destination_asset_path=to_path)


# path: str : Asset path
# return: bool : True if the operation succeeds
def deleteAsset(path=''):
    return unreal.EditorAssetLibrary.delete_asset(asset_path_to_delete=path)


# path: str : Asset path
# return: bool : True if the asset exists
def assetExist(path=''):
    return unreal.EditorAssetLibrary.does_asset_exist(asset_path=path)


# from_path: str : Asset path to rename
# to_path: str : Renamed asset path
# return: bool : True if the operation succeeds
def renameAsset(from_path='', to_path=''):
    return unreal.EditorAssetLibrary.rename_asset(source_asset_path=from_path, destination_asset_path=to_path)


# Note: This function will also work on assets of the type level. (But might be really slow if the level is huge)
# from_path: str : Asset path to duplicate
# to_path: str : Duplicate asset path
# show_dialog: bool : True if you want to show the confirm pop-up
# return: bool : True if the operation succeeds
def duplicateAssetDialog(from_path='', to_path='', show_dialog=True):
    splitted_path = to_path.rsplit('/', 1)
    asset_path = splitted_path[0]
    asset_name = splitted_path[1]
    if show_dialog:
        return unreal.AssetToolsHelpers.get_asset_tools().duplicate_asset_with_dialog(asset_name=asset_name, package_path=asset_path, original_object=getPackageFromPath(from_path))
    else:
        return unreal.duplicate_asset.get_asset_tools().duplicate_asset(asset_name=asset_name, package_path=asset_path, original_object=getPackageFromPath(from_path))


# Note: This function will also work on assets of the type level. (But might be really slow if the level is huge)
# from_path: str : Asset path to rename
# to_path: str : Renamed asset path
# show_dialog: bool : True if you want to show the confirm pop-up
# return: bool : True if the operation succeeds
def renameAssetDialog(from_path='', to_path='', show_dialog=True):
    splitted_path = to_path.rsplit('/', 1)
    asset_path = splitted_path[0]
    asset_name = splitted_path[1]
    rename_data = unreal.AssetRenameData(asset=getPackageFromPath(from_path), new_package_path=asset_path, new_name=asset_name)
    if show_dialog:
        return unreal.AssetToolsHelpers.get_asset_tools().rename_assets_with_dialog(assets_and_names=[rename_data])
    else:
        return unreal.AssetToolsHelpers.get_asset_tools().rename_assets(assets_and_names=[rename_data])


# path: str : Asset path
# return: bool : True if the operation succeeds
def saveAsset(path='', force_save=True):
    return unreal.EditorAssetLibrary.save_asset(asset_to_save=path, only_if_is_dirty = not force_save)


# path: str : Directory path
# return: bool : True if the operation succeeds
def saveDirectory(path='', force_save=True, recursive=True):
    return unreal.EditorAssetLibrary.save_directory(directory_path=path, only_if_is_dirty=not force_save, recursive=recursive)


# path: str : Asset path
# return: obj : The loaded asset
def getPackageFromPath(path):
    return unreal.load_package(name=path)


# return: obj List : The assets that need to be saved
def getAllDirtyPackages():
    packages = []
    for x in unreal.EditorLoadingAndSavingUtils.get_dirty_content_packages():
        packages.append(x)
    for x in unreal.EditorLoadingAndSavingUtils.get_dirty_map_packages():
        packages.append(x)
    return packages


# show_dialog: bool : True if you want to see the confirm pop-up
# return: bool : True if the operation succeeds
def saveAllDirtyPackages(show_dialog=False):
    if show_dialog:
        return unreal.EditorLoadingAndSavingUtils.save_dirty_packages_with_dialog(save_map_packages=True, save_content_packages=True)
    else:
        return unreal.EditorLoadingAndSavingUtils.save_dirty_packages(save_map_packages=True, save_content_packages=True)


# show_dialog: bool : True if you want to see the confirm pop-up
# return: bool : True if the operation succeeds
def savePackages(packages=[], show_dialog=False):
    if show_dialog:
        return unreal.EditorLoadingAndSavingUtils.save_packages_with_dialog(packages_to_save=packages, only_dirty=False) # only_dirty=False :
    else:                                                                                                                # looks like that it's not
        return unreal.EditorLoadingAndSavingUtils.save_packages(packages_to_save=packages, only_dirty=False)             # working properly at the moment


# filename: str : Windows file fullname of the asset you want to import
# destination_path: str : Asset path
# option: obj : Import option object. Can be None for assets that does not usually have a pop-up when importing. (e.g. Sound, Texture, etc.)
# return: obj : The import task object
def buildImportTask(filename='', destination_path='', options=None):
    task = unreal.AssetImportTask()
    task.set_editor_property('automated', True)
    task.set_editor_property('destination_name', '')
    task.set_editor_property('destination_path', destination_path)
    task.set_editor_property('filename', filename)
    task.set_editor_property('replace_existing', True)
    task.set_editor_property('save', True)
    task.set_editor_property('options', options)
    return task


# tasks: obj List : The import tasks object. You can get them from buildImportTask()
# return: str List : The paths of successfully imported assets
def executeImportTasks(tasks=[]):
    unreal.AssetToolsHelpers.get_asset_tools().import_asset_tasks(tasks)
    imported_asset_paths = []
    for task in tasks:
        for path in task.get_editor_property('imported_object_paths'):
            imported_asset_paths.append(path)
    return imported_asset_paths


# return: obj : Import option object. The basic import options for importing a static mesh
def buildStaticMeshImportOptions():
    options = unreal.FbxImportUI()
    # unreal.FbxImportUI
    options.set_editor_property('import_mesh', True)
    options.set_editor_property('import_textures', False)
    options.set_editor_property('import_materials', False)
    options.set_editor_property('import_as_skeletal', False)  # Static Mesh
    # unreal.FbxMeshImportData
    options.static_mesh_import_data.set_editor_property('import_translation', unreal.Vector(0.0, 0.0, 0.0))
    options.static_mesh_import_data.set_editor_property('import_rotation', unreal.Rotator(0.0, 0.0, 0.0))
    options.static_mesh_import_data.set_editor_property('import_uniform_scale', 1.0)
    # unreal.FbxStaticMeshImportData
    options.static_mesh_import_data.set_editor_property('combine_meshes', True)
    options.static_mesh_import_data.set_editor_property('generate_lightmap_u_vs', True)
    options.static_mesh_import_data.set_editor_property('auto_generate_collision', True)
    return options


# return: obj : Import option object. The basic import options for importing a skeletal mesh
def buildSkeletalMeshImportOptions():
    options = unreal.FbxImportUI()
    # unreal.FbxImportUI
    options.set_editor_property('import_mesh', True)
    options.set_editor_property('import_textures', True)
    options.set_editor_property('import_materials', True)
    options.set_editor_property('import_as_skeletal', True)  # Skeletal Mesh
    # unreal.FbxMeshImportData
    options.skeletal_mesh_import_data.set_editor_property('import_translation', unreal.Vector(0.0, 0.0, 0.0))
    options.skeletal_mesh_import_data.set_editor_property('import_rotation', unreal.Rotator(0.0, 0.0, 0.0))
    options.skeletal_mesh_import_data.set_editor_property('import_uniform_scale', 1.0)
    # unreal.FbxSkeletalMeshImportData
    options.skeletal_mesh_import_data.set_editor_property('import_morph_targets', True)
    options.skeletal_mesh_import_data.set_editor_property('update_skeleton_reference_pose', False)
    return options


# skeleton_path: str : Skeleton asset path of the skeleton that will be used to bind the animation
# return: obj : Import option object. The basic import options for importing an animation
def buildAnimationImportOptions(skeleton_path=''):
    options = unreal.FbxImportUI()
    # unreal.FbxImportUI
    options.set_editor_property('import_animations', True)
    options.skeleton = unreal.load_asset(skeleton_path)
    # unreal.FbxMeshImportData
    options.anim_sequence_import_data.set_editor_property('import_translation', unreal.Vector(0.0, 0.0, 0.0))
    options.anim_sequence_import_data.set_editor_property('import_rotation', unreal.Rotator(0.0, 0.0, 0.0))
    options.anim_sequence_import_data.set_editor_property('import_uniform_scale', 1.0)
    # unreal.FbxAnimSequenceImportData
    options.anim_sequence_import_data.set_editor_property('animation_length', unreal.FBXAnimationLengthImportType.FBXALIT_EXPORTED_TIME)
    options.anim_sequence_import_data.set_editor_property('remove_redundant_keys', False)
    return options




# Cpp ########################################################################################################################################################################################




# return: str List : The asset paths that are currently selected
def getSelectedAssets():
    return unreal.CppLib.get_selected_assets()


# asset_paths: str List : The asset paths to select
def setSelectedAssets(asset_paths=[]):
    unreal.CppLib.set_selected_assets(asset_paths)


# return: str List : The folder paths that are currently selected
def getSelectedFolders():
    return unreal.CppLib.get_selected_folders()


# folder_paths: str List : The asset paths to select
def setSelectedFolders(folder_paths=[]):
    unreal.CppLib.set_selected_folders(folder_paths)


# return: obj List : The asset objects that are currently opened in the editor
def getAllOpenedAssets():
    return unreal.CppLib.get_assets_opened_in_editor()


# asset_objects: obj List : The asset objects to close
def closeAssets(asset_objects=[]):
    unreal.CppLib.close_editor_for_assets(asset_objects)


# Note: If the directory already exists, might need to restart Unreal,
#       but it's not needed if the color is applied before creating the folder.
# path: str : Directory path
# color: obj unreal.LinearColor : The color to apply
def setDirectoryColor(path='', color=None):
    unreal.CppLib.set_folder_color(path, color)
