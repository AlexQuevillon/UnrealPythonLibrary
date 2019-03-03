# unreal.EditorLevelLibrary
#   https://api.unrealengine.com/INT/PythonAPI/class/EditorLevelLibrary.html

# unreal.GameplayStatics
#   https://api.unrealengine.com/INT/PythonAPI/class/GameplayStatics.html

# unreal.Actor
#   https://api.unrealengine.com/INT/PythonAPI/class/Actor.html

import unreal
import PythonHelpers


# use_selection: bool : True if you want to get only the selected actors
# actor_class: class unreal.Actor : The class used to filter the actors. Can be None if you do not want to use this filter
# actor_tag: str : The tag used to filter the actors. Can be None if you do not want to use this filter
# world: obj unreal.World : The world you want to get the actors from. If None, will get the actors from the currently open world.
# return: obj List unreal.Actor : The actors
def getAllActors(use_selection=False, actor_class=None, actor_tag=None, world=None):
    world = world if world is not None else unreal.EditorLevelLibrary.get_editor_world() # Make sure to have a valid world
    if use_selection:
        selected_actors = getSelectedActors()
        class_actors = selected_actors
        if actor_class:
            class_actors = [x for x in selected_actors if PythonHelpers.cast(x, actor_class)]
        tag_actors = class_actors
        if actor_tag:
            tag_actors = [x for x in selected_actors if x.actor_has_tag(actor_tag)]
        return [x for x in tag_actors]
    elif actor_class:
        actors = unreal.GameplayStatics.get_all_actors_of_class(world, actor_class)
        tag_actors = actors
        if actor_tag:
            tag_actors = [x for x in actors if x.actor_has_tag(actor_tag)]
        return [x for x in tag_actors]
    elif actor_tag:
        tag_actors = unreal.GameplayStatics.get_all_actors_with_tag(world, actor_tag)
        return [x for x in tag_actors]
    else:
        actors = unreal.GameplayStatics.get_all_actors_of_class(world, unreal.Actor)
        return [x for x in actors]


# path: str : Blueprint class path
# actor_location: obj unreal.Vector : The actor location
# actor_rotation: obj unreal.Rotator : The actor rotation
# actor_location: obj unreal.Vector : The actor scale
# world: obj unreal.World : The world in which you want to spawn the actor. If None, will spawn in the currently open world.
# properties: dict : The properties you want to set before the actor is spawned. These properties will be taken into account in the Construction Script
# return: obj unreal.Actor : The spawned actor
def spawnBlueprintActor(path='', actor_location=None, actor_rotation=None, actor_scale=None, world=None, properties={}):
    actor_class = unreal.EditorAssetLibrary.load_blueprint_class(path)
    actor_transform = unreal.Transform(actor_location, actor_rotation, actor_scale)
    world = world if world is not None else unreal.EditorLevelLibrary.get_editor_world() # Make sure to have a valid world
    # Begin Spawn
    actor = unreal.GameplayStatics.begin_spawning_actor_from_class(world_context_object=world, actor_class=actor_class, spawn_transform=actor_transform, no_collision_fail=True)
    # Edit Properties
    for x in properties:
        actor.set_editor_property(x, properties[x])
    # Complete Spawn
    unreal.GameplayStatics.finish_spawning_actor(actor=actor, spawn_transform=actor_transform)
    return actor


# return: obj List unreal.Actor : The selected actors in the world
def getSelectedActors():
    return unreal.EditorLevelLibrary.get_selected_level_actors()


# Note: Will always clear the selection before selecting.
# actors_to_select: obj List unreal.Actor : The actors to select.
def selectActors(actors_to_select=[]):
    unreal.EditorLevelLibrary.set_selected_level_actors(actors_to_select)

