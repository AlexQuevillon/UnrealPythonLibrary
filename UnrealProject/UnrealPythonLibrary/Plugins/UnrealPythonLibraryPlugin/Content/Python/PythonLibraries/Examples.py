import unreal
import AssetFunctions
import EditorFunctions
import PythonHelpers
import QtFunctions
import WorldFunctions



def showAssetsInContentBrowser_EXAMPLE():
    paths = ['/Game/Textures/MyTexture', '/Game/SkeletalMeshes/MySkeletalMesh', '/Game/Sounds/MySound']
    AssetFunctions.showAssetsInContentBrowser(paths)

def openAssets_EXAMPLE():
    paths = ['/Game/Textures/MyTexture', '/Game/SkeletalMeshes/MySkeletalMesh', '/Game/Sounds/MySound']
    AssetFunctions.openAssets(paths)

def createDirectory_EXAMPLE():
    operation_succeeded = AssetFunctions.createDirectory('/Game/MyDirectory')
    print operation_succeeded

def duplicateDirectory_EXAMPLE():
    operation_succeeded = AssetFunctions.duplicateDirectory('/Game/MyDirectory', '/Game/MyDirectory_Duplicated')
    print operation_succeeded 

def deleteDirectory_EXAMPLE():
    operation_succeeded = AssetFunctions.deleteDirectory('/Game/MyDirectory')
    print operation_succeeded 

def directoryExist_EXAMPLE():
    exist = AssetFunctions.directoryExist('/Game/MyDirectory')
    print exist

def renameDirectory_EXAMPLE():
    operation_succeeded = AssetFunctions.renameDirectory('/Game/MyDirectory', '/Game/MyDirectory_Renamed')
    print operation_succeeded 

def duplicateAsset_EXAMPLE():
    operation_succeeded = AssetFunctions.duplicateAsset('/Game/MyAsset', '/Game/MyAsset_Duplicated')
    print operation_succeeded 

def deleteAsset_EXAMPLE():
    operation_succeeded = AssetFunctions.deleteAsset('/Game/MyAsset')
    print operation_succeeded 

def assetExist_EXAMPLE():
    exist = AssetFunctions.assetExist('/Game/MyAsset')
    print exist

def renameAsset_EXAMPLE():
    operation_succeeded  = AssetFunctions.renameAsset('/Game/MyAsset', '/Game/MyAsset_Renamed')
    print operation_succeeded 

def duplicateAssetDialog_EXAMPLE():
    operation_succeeded = AssetFunctions.duplicateAssetDialog('/Game/MyAsset', '/Game/MyAsset_Duplicated', True)
    print operation_succeeded

def renameAssetDialog_EXAMPLE():
    operation_succeeded = AssetFunctions.duplicateAssetDialog('/Game/MyAsset', '/Game/MyAsset_Renamed', True)
    print operation_succeeded

def saveAsset_EXAMPLE():
    operation_succeeded = AssetFunctions.saveAsset('/Game/MyAsset', True)
    print operation_succeeded

def saveDirectory_EXAMPLE():
    operation_succeeded = AssetFunctions.saveDirectory('/Game/MyDirectory', True, True)
    print operation_succeeded

def importMyAssets_EXAMPLE():
    texture_task = AssetFunctions.buildImportTask('C:/Path/To/Assets/Texture.TGA', '/Game/Textures')
    sound_task = AssetFunctions.buildImportTask('C:/Path/To/Assets/Sound.WAV', '/Game/Sounds')
    static_mesh_task = AssetFunctions.buildImportTask('C:/Path/To/Assets/StaticMesh.FBX', '/Game/StaticMeshes', AssetFunctions.buildStaticMeshImportOptions())
    skeletal_mesh_task = AssetFunctions.buildImportTask('C:/Path/To/Assets/SkeletalMesh.FBX', '/Game/SkeletalMeshes', AssetFunctions.buildSkeletalMeshImportOptions())
    animation_task = AssetFunctions.buildImportTask('C:/Path/To/Assets/Animation.FBX', '/Game/Animations', AssetFunctions.buildAnimationImportOptions('/Game/SkeletalMeshes/SkeletalMesh'))
    print AssetFunctions.executeImportTasks([texture_task, sound_task, static_mesh_task, skeletal_mesh_task])
    # Not executing the animation_task at the same time of the skeletal_mesh_task because it look like it does not work if it's the case. Pretty sure it's not normal.
    print AssetFunctions.executeImportTasks([animation_task])

def spawnBlueprintActor_EXAMPLE():
    path = '/Game/MyBlueprint'
    location = unreal.Vector(1000.0, 400.0, 0.0)
    rotation = unreal.Rotator(90.0, 0.0, 0.0)
    scale = unreal.Vector(1.0, 1.0, 5.0)
    properties = {'tags': ['MyFirstTag', 'MySecondTag'], 'hidden': False}
    print WorldFunctions.spawnBlueprintActor(path, location, rotation, scale, None, properties)

def executeSlowTask_EXAMPLE():
    quantity_steps_in_slow_task = 1000
    with unreal.ScopedSlowTask(quantity_steps_in_slow_task, 'My Slow Task Text ...') as slow_task:
        slow_task.make_dialog(True)
        for x in range(quantity_steps_in_slow_task):
            if slow_task.should_cancel_EXAMPLE():
                break
            slow_task.enter_progress_frame(1, 'My Slow Task Text ... ' + str(x) + ' / ' + str(quantity_steps_in_slow_task))
            # Execute slow logic here
            print 'Executing Slow Task'

def cast_EXAMPLE():
    obj = unreal.load_asset('/Game/Textures/MyTexture')
    if PythonHelpers.cast(obj, unreal.Texture2D):
        print 'Cast Succeeded'
    else:
        print 'Cast Failed'

def spawnQtWindow_EXAMPLE():
    import QtWindowOne
    print QtFunctions.spawnQtWindow(QtWindowOne.QtWindowOne)

def getAllActors_EXAMPLE():
    print WorldFunctions.getAllActors(False, unreal.StaticMeshActor, 'MyTag', None)

def getSelectedActors_EXAMPLE():
    print getSelectedActors()

def selectActors_EXAMPLE():
    all_actors = getAllActors()
    actors_to_select = []
    for x in range(len(all_actors)):
        if x % 2:
            actors_to_select.append(all_actors[x])

def clearActorSelection_EXAMPLE():
    selectActors()

def focusAllViewportsOnSelectedActors_EXAMPLE():
    focusViewportOnActor(False)

def focusActiveViewportOnRandomActor_EXAMPLE():
    actors_in_world = unreal.GameplayStatics.get_all_actors_of_class(unreal.EditorLevelLibrary.get_editor_world(), unreal.Actor)
    random_actor_in_world = actors_in_world[random.randrange(len(actors_in_world))]
    focusViewportOnActor(True, random_actor_in_world)

def createGenericAsset_EXAMPLE():
    base_path = '/Game/GenericAssets/'
    generic_assets = [
        [base_path + 'sequence',        unreal.LevelSequence,  unreal.LevelSequenceFactoryNew()],
        [base_path + 'material',        unreal.Material,       unreal.MaterialFactoryNew()],
        [base_path + 'world',           unreal.World,          unreal.WorldFactory()],
        [base_path + 'particle_system', unreal.ParticleSystem, unreal.ParticleSystemFactoryNew()],
        [base_path + 'paper_flipbook',  unreal.PaperFlipbook,  unreal.PaperFlipbookFactory()],
        [base_path + 'data_table',      unreal.DataTable,      unreal.DataTableFactory()], # Will not work
    ]
    for asset in generic_assets:
        print createGenericAsset(asset[0], True, asset[1], asset[2])




# Cpp ########################################################################################################################################################################################




def getSelectedAssets_EXAMPLE():
    print AssetFunctions.getSelectedAssets()

def setSelectedAssets_EXAMPLE():
    asset_paths = ['/Game/Textures/TX_LightSpotMove', '/Game/SkeletalMeshes/TutorialTPP_Mat', '/Game/Sounds/S_CompileSuccess', '/Game/Map/MyNewLevel']
    AssetFunctions.setSelectedAssets(asset_paths)

def getSelectedFolders_EXAMPLE():
    print AssetFunctions.getSelectedFolders()

def setSelectedFolders_EXAMPLE():
    folder_paths = ['/Game/Textures', '/Game/SkeletalMeshes', '/Game/Sounds', '/Game/Map']
    AssetFunctions.setSelectedFolders(folder_paths)

def getAllOpenedAssets_EXAMPLE():
    print AssetFunctions.getAllOpenedAssets()

def closeAssets_EXAMPLE():
    asset_objects = AssetFunctions.getAllOpenedAssets()
    AssetFunctions.closeAssets(asset_objects)

def setDirectoryColor_EXAMPLE():
    base_path = '/Game/PythonGenerated/'
    path = base_path + 'BasicLinearColor'
    color = unreal.LinearColor(0, 1, 1, 1)
    AssetFunctions.setDirectoryColor(path, color)
    AssetFunctions.createDirectory(path) # Note: Only call this line if the folder is not already created

def setDirectoryColorGradient_EXAMPLE():
    base_path = '/Game/PythonGenerated/'
    for x in range(100, 400):
        # Get Gradient Color
        z = x - 100
        if z < 100:
            r = 1.0 - z / 100.0
            g = 0.0 + z / 100.0
            b = 0.0
        elif z < 200:
            r = 0.0
            g = 1.0 - (z - 100) / 100.0
            b = 0.0 + (z - 100) / 100.0
        else:
            r = 0.0 + (z - 200) / 100.0
            g = 0.0
            b = 1.0 - (z - 200) / 100.0
        color = unreal.LinearColor(r, g, b, 1)
        # Set Directory Color
        path = base_path + str(x)
        AssetFunctions.setDirectoryColor(path, color)
        AssetFunctions.createDirectory(path)  # Note: Only call this line if the folder is not already created

def executeConsoleCommand_EXAMPLE():
    console_commands = ['r.ScreenPercentage 0.1', 'r.Color.Max 6', 'stat fps', 'stat unit']
    for x in console_commands:
        EditorFunctions.executeConsoleCommand(x)

def getAllProperties_EXAMPLE():
    obj = unreal.Actor()
    object_class = obj.get_class()
    for x in PythonHelpers.getAllProperties(object_class):
        y = x
        while len(y) < 50:
            y = ' ' + y
        print y + ' : ' + str(obj.get_editor_property(x))

def setViewportLocationAndRotation_EXAMPLE():
    viewport_index = getActiveViewportIndex()
    setViewportLocationAndRotation(viewport_index, unreal.Vector(0.0, 0.0, 0.0), unreal.Rotator(0.0, 90.0, 0.0))

def snapViewportToActor_EXAMPLE():
    actors_in_world = unreal.GameplayStatics.get_all_actors_of_class(unreal.EditorLevelLibrary.get_editor_world(), unreal.Actor)
    random_actor_in_world = actors_in_world[random.randrange(len(actors_in_world))]
    viewport_index = getActiveViewportIndex()
    snapViewportToActor(viewport_index, random_actor_in_world)
